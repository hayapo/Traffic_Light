using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using System.Linq;

public class noCueControl : MonoBehaviour
{
    public GameObject fixationCross;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Subject;
    public int eachBlockTaskAmount;
    public int blockAmount;
    public float speed;
    
    private float taskStart;
    private float restEnd;
    private float taskStartTime;
    private float FEEDBACK_DELAY = 0.25f;

    private bool isForwardFrame;
    private bool isKeyDown;
    private bool isRest;

    private string GrandStartTimeText;

    private bool probeTest;

    public bool isTest;
    public int ExpNumber;
    public int TestNumber;
    public int SubjectNumber;


    // { 2, 1, 6, 4, 5 } -> Probe Test Trial

    // 10 * 5 = 50
    // private int[] PROBE_TRIAL_LIST = new int[] { 2, 11, 26, 34, 45 };
    
    // 6 * 5 = 30
    private int[] PROBE_TRIAL_LIST = new int[] { 2, 7, 18, 22, 29 };

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.J) && isRest)
        {
            isKeyDown = true;
        }
    }

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("noCue Condition Start");
        isKeyDown = false;
        isRest = false;
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        fixationCross.SetActive(false);

        Debug.Log("Wait for Start");
        while (!Input.GetKeyDown(KeyCode.S))
        {
            yield return null;
        }

        Debug.Log("Wait Ended");

        yield return new WaitForSeconds(3);

        StartCoroutine(LoopExp());
    }

    // Update is called once per frame
    private IEnumerator LoopExp()
    {
        DateTime GrandStartTime;
        int currentBlock = 0;
        int totalAmount = eachBlockTaskAmount * blockAmount;
        float totalDuration = 0;
        List<string> keyEventListAll = new List<string>();

        GrandStartTime = DateTime.Now;
        GrandStartTimeText =
            GrandStartTime.Hour.ToString() + ":" +
            GrandStartTime.Minute.ToString() + ":" +
            GrandStartTime.Second.ToString() + ":" +
            GrandStartTime.Millisecond.ToString();

        for (int i = 0; i < totalAmount; i++)
        {
            Subject.transform.position = new Vector3(0, 0, 0);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);
            fixationCross.SetActive(false);
            isForwardFrame = true;
            isKeyDown = false;
            isRest = false;

            float timer = 0f;
            float trialDuration = 0;

            List<string> keyEventList = new List<string>();

            if (i % eachBlockTaskAmount == 0)
            {
                currentBlock += 1;
            }

            Debug.Log("===== Step " + (i + 1) + " Started =====");

            Debug.Log("Fixation Start");
            while (timer < 2.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                keyEventListAll.Add("0");
                keyEventList.Add("0");
                fixationCross.SetActive(true);
            }

            fixationCross.SetActive(false);
            Crossings.SetActive(true);
            Sidewalks.SetActive(true);
            Debug.Log("Rest Start");
            isRest = true;

            //while (!Input.GetKeyDown(KeyCode.J)) // Keypad5
            //{
            //    timer += Time.deltaTime;
            //    keyEventListAll.Add("0");
            //    yield return new WaitForFixedUpdate();
            //}

            while (!isKeyDown)
            {
                timer += Time.deltaTime;
                keyEventListAll.Add("0");
                keyEventList.Add("0");
                yield return new WaitForFixedUpdate();
            }

            if (isKeyDown)
            {
                keyEventListAll.Add("1");
                keyEventList.Add("1");
                isKeyDown = false;
            }

            restEnd = timer;
            isRest = false;

            Debug.Log("MI Task Start");
            while (restEnd <= timer && timer < restEnd + 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                Debug.Log(timer);
                keyEventListAll.Add("0");
                keyEventList.Add("0");

                if (i+1 != PROBE_TRIAL_LIST[currentBlock-1])
                {
                    if (isForwardFrame)
                    {
                        yield return new WaitForSeconds(FEEDBACK_DELAY);
                        isForwardFrame = false;
                    }
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }
            }

            trialDuration += timer;
            totalDuration += trialDuration;
            Debug.Log("Total Time: " + trialDuration);

            // keyEvent側が1frame分多いのでAdjustする
            keyEventListAll.RemoveAt(keyEventListAll.Count() - 1);
            keyEventList.RemoveAt(keyEventList.Count() - 1);

            float TimePeriod = (float)keyEventList.Count() / 250;
            Debug.Log("Total Time Period: " + TimePeriod);

            Debug.Log("===== Step " + (i+1) + " Ended =====");
        }
        
        float AllTimePeriod = (float)keyEventListAll.Count() / 250;
        
        Debug.Log("Total Time: " + totalDuration);
        Debug.Log("Total Time Period: " + AllTimePeriod);

        /*
            TODO:
                - keyEventArrayAllをファイルに書き出す処理を書く
                    - 各試行を行ごとに書き込んだファイルも追加で書き出すようにする
                - 実験開始時刻を計測してファイルに書き出す
                    - [done] GrandStartTimeText
                    - GrandStartTimeTextを書き出す
        */

        string KeyEvent_file_path = "";
        
        if (isTest)
        {
            KeyEvent_file_path = $@"C:\Users\hayat\GitProjects\TrafficLightExp\Exp_Event_Record\exp_{ExpNumber}\test_{TestNumber}\subject_{SubjectNumber}\";
        } else
        {
            KeyEvent_file_path = $@"C:\Users\hayat\GitProjects\TrafficLightExp\Exp_Event_Record\exp_{ExpNumber}\subject_{SubjectNumber}\";
        }
        
        string KeyEvent_file_name = "KeyEventAllTime.txt";
        
        Debug.Log(KeyEvent_file_path + KeyEvent_file_name);
        
        using (StreamWriter sw = new StreamWriter(KeyEvent_file_path + KeyEvent_file_name, false))
        {
            foreach (var line in keyEventListAll)
            {
                sw.WriteLine(line);
            }
        }
    }
}

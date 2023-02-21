using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using System.Linq;

public class ControlExp : MonoBehaviour
{
    public GameObject fixationCross;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Subject;
    public int eachBlockTaskAmount;
    public int blockAmount;
    public float speed;
    
    private float timer;
    private float totalTime;
    private float taskStart;
    private float restEnd;
    private float taskStartTime;
    private float feedbackDelay = 0.25f;
    private int currentBlock;

    private bool isForwardFrame;
    private bool isFirstKeyPress;

    private bool probeTest;


    // { 2, 1, 6, 4, 5 }
    private int[] PROBE_TRIAL_LIST = new int[] { 2, 7, 18, 22, 29 };

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("noCue Condition Start");
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        fixationCross.SetActive(false);

        Debug.Log("Wait for Start");

        while (!Input.GetKeyDown(KeyCode.F))
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
        currentBlock = 0;
        int totalAmount = eachBlockTaskAmount * blockAmount;
        List<int> delayAddList = new List<int>(new int[6]);
        
        for (int i = 0; i < totalAmount; i++)
        {
            Subject.transform.position = new Vector3(0, 0, 0);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);
            fixationCross.SetActive(false);
            isForwardFrame = true;
            isFirstKeyPress = true;
            List<int> keyEventList = new List<int>();

            timer = 0f;
            totalTime = 0;

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
                keyEventList.Add(0);
                fixationCross.SetActive(true);
            }

            fixationCross.SetActive(false);

            Debug.Log("Rest Start");
            while (!Input.GetKeyDown(KeyCode.F))
            {
                timer += Time.deltaTime;
                keyEventList.Add(0);
                yield return new WaitForFixedUpdate();
            }
            
            if (isFirstKeyPress)
            {
                keyEventList.Add(1);
                isFirstKeyPress = false;
            }

            restEnd = timer;

            Debug.Log("MI Task Start");
            // FBのときだけキーボードイベントが5フレーム(約0.2s)分短いのを直す
            while (restEnd <= timer && timer < restEnd + 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                Debug.Log(timer);
                keyEventList.Add(0);
                Crossings.SetActive(true);
                Sidewalks.SetActive(true);

                if (i+1 == PROBE_TRIAL_LIST[currentBlock-1])
                {
                    if (isForwardFrame)
                    {
                        yield return new WaitForSeconds(feedbackDelay);
                        // timer += feedbackDelay;
                        // keyEventList.AddRange(delayAddList);
                        isForwardFrame = false;
                    }
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }
            }
            totalTime += timer;
            Debug.Log("Total Time: " + totalTime);
            float listPeriod = (float)keyEventList.Count() / 250;
            // Debug.Log(string.Join(",", delayAddList.Select(n => n.ToString())));
            Debug.Log(listPeriod);
            Debug.Log("===== Step " + (i+1) + " Ended =====");
        }
    }
}

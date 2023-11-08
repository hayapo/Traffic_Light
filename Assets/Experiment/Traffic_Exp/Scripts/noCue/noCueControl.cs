using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using System.Linq;
using brainflow;
using brainflow.math;

public class noCueControl : MonoBehaviour
{
    public GameObject fixationCross;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Subject;
    public GameObject Ground;
    public int eachBlockTaskAmount;
    public int blockAmount;
    public float speed = 60.0f;
    public float FEEDBACK_DELAY = 0.75f;
    
    private float taskStart;
    private float restEnd;
    private float taskStartTime;

    private bool isForwardFrame;
    private bool isKeyDown;
    private bool isRest = false;

    private bool probeTest;

    public bool isTest;
    public bool isDebug;
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
        // KeyCode.Keypad5
        if (Input.GetKeyDown(KeyCode.Keypad5) && isRest)
        {
            isKeyDown = true;
        }
    }

    private BoardShim board_shim = null;
    private int sampling_rate = 0;

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("noCue Condition Start");
        isKeyDown = false;
        isRest = false;
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        fixationCross.SetActive(false);
        Ground.SetActive(false);


        try
        {
            BoardShim.set_log_file($"brainflow_log_exp-{ExpNumber}_nocue_subject-{SubjectNumber}.txt");
            BoardShim.enable_dev_board_logger();

            BrainFlowInputParams input_params = new BrainFlowInputParams();
            int board_id;
            if (isDebug)
            {
                board_id = (int)BoardIds.SYNTHETIC_BOARD;
            }
            else
            {
                board_id = (int)BoardIds.CYTON_BOARD;
            }
            input_params.serial_port = "COM11";
            sampling_rate = BoardShim.get_sampling_rate(board_id);
            board_shim = new BoardShim(board_id, input_params);
            // board_shim.prepare_session();
            Debug.Log("Brainflow session has been prepared");
        }
        catch (BrainFlowError e)
        {
            Debug.Log(e);
        }

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
        if (board_shim == null)
        {
            yield break;
        }
        int currentBlock = 0;
        int totalAmount = eachBlockTaskAmount * blockAmount;
        float totalDuration = 0;
        List<string> keyEventListAll = new List<string>();
        List<List<string>> keyEventPerStep = new List<List<string>>();

        Debug.Log("Brainflow streaming was started");

        for (int i = 0; i < totalAmount; i++)
        {
            board_shim.prepare_session();

            Subject.transform.position = new Vector3(0, 0, 0);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);
            fixationCross.SetActive(false);
            Ground.SetActive(false);
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
            board_shim.start_stream(450000, $"file://brainflow_data_exp-{ExpNumber}_nocue_subject-{SubjectNumber}_step-{i+1}.csv:w");

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
            Ground.SetActive(true);
            Debug.Log("Rest Start");
            isRest = true;

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
                board_shim.insert_marker(i+1);
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
            board_shim.stop_stream();
            board_shim.release_session();

            trialDuration += timer;
            totalDuration += trialDuration;
            Debug.Log("Total Time: " + trialDuration);

            // keyEvent‘¤‚ª1frame•ª‘½‚¢‚Ì‚Å•â³‚·‚é
            keyEventListAll.RemoveAt(keyEventListAll.Count() - 1);
            keyEventList.RemoveAt(keyEventList.Count() - 1);

            float TimePeriod = (float)keyEventList.Count() / 250;
            Debug.Log("Total Time Period: " + TimePeriod);

            keyEventPerStep.Add(keyEventList);

            Debug.Log("===== Step " + (i+1) + " Ended =====");
        }

        float AllTimePeriod = (float)keyEventListAll.Count() / 250;
        
        Debug.Log("Total Time: " + totalDuration);
        Debug.Log("Total Time Period: " + AllTimePeriod);

        string KeyEvent_file_path = "";
        
        if (isTest)
        {
            KeyEvent_file_path = $@"C:\Gitproject\Traffic_Light\Exp_Event_Record\exp_{ExpNumber}\test_{TestNumber}\subject_{SubjectNumber}\";
        } else
        {
            KeyEvent_file_path = $@"C:\Gitproject\Traffic_Light\Exp_Event_Record\exp_{ExpNumber}\subject_{SubjectNumber}\";
        }
        
        string KeyEvent_file_name = "KeyEventAllTime.txt";

        if (!Directory.Exists(KeyEvent_file_path))
        {
            Directory.CreateDirectory(KeyEvent_file_path);
        }
        
        Debug.Log(KeyEvent_file_path + KeyEvent_file_name);
        
        using (StreamWriter sw = new StreamWriter(KeyEvent_file_path + KeyEvent_file_name, false))
        {
            foreach (var line in keyEventListAll)
            {
                sw.WriteLine(line);
            }
        }


        for (int t=0; t < totalAmount; t++)
        {
            string KeyEventPerStep_file_name = $"KeyEventPerStep_{t + 1}.txt";
            using (StreamWriter sw = new StreamWriter(KeyEvent_file_path + KeyEventPerStep_file_name, false))
            {
                foreach(var line in keyEventPerStep[t])
                {
                    sw.WriteLine(line);
                }
            }
        }

        EditorApplication.isPlaying = false;
        Application.Quit();
    }
    private void OnDestroy()
    {
        if (board_shim != null)
        {
            try
            {
                board_shim.release_session();
            }
            catch (BrainFlowError e)
            {
                Debug.Log(e);
            }
            Debug.Log("Brainflow streaming was released");
        }
    }
    private void OnApplicationPause()
    {
        if (board_shim != null)
        {
            try
            {
                board_shim.release_session();
            }
            catch (BrainFlowError e)
            {
                Debug.Log(e);
            }
            Debug.Log("Brainflow streaming was released");
        }
    }
}

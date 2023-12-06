using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.InputSystem;
using System.IO;
using System.Linq;
using brainflow;

public class Kick_nocue_control : MonoBehaviour
{
    // Constants
    private int eachBlockTaskAmount = 6;
    private int blockAmount = 5;
    private bool isCueKeyDown = false, isWait, isDelayFrame;
    private Vector3 initalBallPosition;
    private string logFileName, rawdataFileName;

    // SerializeFields
    // Ball speed and Feedback delay time 
    [SerializeField] public float speed;
    [SerializeField] public float FEEDBACK_DELAY;
    // GameObjects
    [SerializeField] public GameObject Fixation;
    [SerializeField] public GameObject Ball;
    [SerializeField] public GameObject Floor;
    [SerializeField] private AudioSource BeepAudioSource;
    [SerializeField] private AudioClip BeepAudioClip;
    // Subject info
    [SerializeField] public string COM_PORT;
    [SerializeField] public bool isTest;
    [SerializeField] public bool useSyntheticBoard = false;
    [SerializeField] public bool isDebug;
    [SerializeField] public int ExpNumber;
    [SerializeField] public int SubjectNumber;
    [SerializeField] public int TestNumber;

    // For OpenBCI Cyton board init
    private BoardShim board_shim = null;
    //private int sampling_rate = 0;

    // Experimental constants 
    private readonly int[] NO_FEEDBACK_TRIAL_LIST = new int[] { 2, 7, 18, 22, 29 };
    KeyCode keyForMiStart = KeyCode.S;
    //UnityEngine.InputSystem.Controls.KeyControl useKeyForCue;

    // Start is called before the first frame update
    private void Update()
    {
        //Input.GetKeyDown(KeyCode.Keypad5)
        if (Input.GetKeyDown(KeyCode.Keypad5) && isWait)
        {
            isCueKeyDown = true;
        }
    }

    private IEnumerator Start()
    {
        // 試行ごとにボールを初期化する位置をinspectorで指定した位置にする
        initalBallPosition = Ball.transform.position;

        // 最初にKeyDownフラグとRestフラグをfalseでイニシャライズ
        isCueKeyDown = false;
        isWait = false;

        keyForMiStart = isDebug ? KeyCode.S : KeyCode.Keypad5;

        // OpenBCI board session preparing
        try
        {
            int board_id;

            if (isTest)
            {
                if (useSyntheticBoard)
                {
                    board_id = (int)BoardIds.SYNTHETIC_BOARD;
                    //useKeyForCue = Keyboard.current.fKey;
                } 
                else
                {
                    board_id = (int)BoardIds.CYTON_BOARD;
                    //useKeyForCue = Keyboard.current.fKey;
                }

                // Generate filename for development
                logFileName = $"brainflow_log_kick-nocue_test-{TestNumber}";
                rawdataFileName = $"brainflow_data_kick-nocue_test-{TestNumber}";
            }
            else
            {
                board_id = (int)BoardIds.CYTON_BOARD;
                //useKeyForCue = Keyboard.current.fKey;

                // Generate filename for development
                logFileName = $"brainflow_log_kick-nocue_sub-{SubjectNumber}";
                rawdataFileName = $"brainflow_data_kick-nocue_sub-{SubjectNumber}";
            }

            BoardShim.set_log_file($"{logFileName}.txt");
            BoardShim.enable_dev_board_logger();

            BrainFlowInputParams input_params = new BrainFlowInputParams();
            input_params.serial_port = COM_PORT;

            board_shim = new BoardShim(board_id, input_params);
            Debug.Log("Brainflow session has been prepared");
        }
        catch (BrainFlowError e)
        {
            Debug.Log(e);
        }

        Debug.Log("Wait for Start");

        while (!Keyboard.current.sKey.wasPressedThisFrame)
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
        float timer, totalDuration = 0.0f, waitEndTime;
        //float startTime, ballDistance

        int totalTrialAmount = eachBlockTaskAmount * blockAmount;

        List<string> keyEventListAllTime = new();

        board_shim.prepare_session();
        board_shim.start_stream(450000, $"file://{rawdataFileName}.csv:w");

        for (int i = 0; i < totalTrialAmount; i++)
        {
            timer = 0f;
            float trialDuration = 0.0f;
            int currentBlock = i / eachBlockTaskAmount; //現在のブロック( 0 - 5 )を計算
            isDelayFrame = true;

            // float currentLoopTimer = 0f;
            // float totalDuration = 3.0f + 1.0f + NO_FEEDBACK_TRIAL_LIST[i] + 1.0f + 3.0f;

            // 試行の最初にボールの位置を,ボールの初期位置(Inspectorで指定した位置)にする
            Ball.transform.position = initalBallPosition;

            Debug.Log("===== Step " + (i + 1) + " Started =====");

            Debug.Log($"Step {i + 1}: Fixation period started");
            while (timer < 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                keyEventListAllTime.Add("0");

                // Display Fixation Cross (& hide Ball and Floor)
                Fixation.SetActive(true);
                Ball.SetActive(false);
                Floor.SetActive(false);
            }

            Debug.Log($"Step {i + 1}: Arbitrary waiting period start");

            Fixation.SetActive(false);
            Ball.SetActive(true);
            Floor.SetActive(true);
            isWait = true;

            while (!isCueKeyDown)
            {
                timer += Time.deltaTime;
                keyEventListAllTime.Add("0");

                yield return new WaitForFixedUpdate();
            }
            if (isCueKeyDown)
            {
                keyEventListAllTime.Add("1");
                board_shim.insert_marker(i + 1);
                isCueKeyDown = false;
            }

            waitEndTime = timer;
            isWait = false;

            Debug.Log($"Step {i + 1}: MI task period Start ");
            while (waitEndTime <= timer && timer < waitEndTime + 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                keyEventListAllTime.Add("0");

                if (i+1 != NO_FEEDBACK_TRIAL_LIST[currentBlock])
                {
                    if (isDelayFrame)
                    {
                        yield return new WaitForSeconds(FEEDBACK_DELAY);
                        isDelayFrame = false;
                    }
                    Ball.transform.position += transform.forward * speed * Time.deltaTime;

                }
            }

            // keyEvent側が1frame分多いので補正する
            keyEventListAllTime.RemoveAt(keyEventListAllTime.Count() - 1);

            totalDuration += timer;
            totalDuration += trialDuration;

            Debug.Log($"Step {i + 1} time: {timer}");
            Debug.Log($"===== Step {i + 1} ended =====");
        }

        board_shim.stop_stream();
        board_shim.release_session();

        Debug.Log("No Cue Exp Ended");
        Debug.Log("Total Time: " + totalDuration);

        float AllTimePeriod = (float)keyEventListAllTime.Count() / 250;
        Debug.Log("Total Time Period: " + AllTimePeriod);

        // Writing key event log file
        string KeyEvent_file_path = "";

        if (isTest)
        {
            KeyEvent_file_path = $@"C:\GitProject\Traffic_Light\Exp_Event_Record\kick_vs_throw\test_{TestNumber}\sub_{SubjectNumber}\";
        }
        else
        {
            KeyEvent_file_path = $@"C:\GitProject\Traffic_Light\Exp_Event_Record\kick_vs_throw\sub_{SubjectNumber}\";
        }

        string KeyEvent_file_name = "Kick_KeyEvent.txt";

        if (!Directory.Exists(KeyEvent_file_path))
        {
            Directory.CreateDirectory(KeyEvent_file_path);
        }

        Debug.Log(KeyEvent_file_path + KeyEvent_file_name);

        using (StreamWriter sw = new StreamWriter(KeyEvent_file_path + KeyEvent_file_name, false))
        {
            foreach (var line in keyEventListAllTime)
            {
                sw.WriteLine(line);
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
}
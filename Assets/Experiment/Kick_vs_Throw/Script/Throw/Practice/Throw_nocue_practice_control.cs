using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.InputSystem;
using System.IO;
using System.Linq;
using brainflow;

public class Throw_nocue_practice_control : MonoBehaviour
{
    // Constants
    private int trialAmount = 10;
    private bool isCueKeyDown = false, isWait, isDelayFrame;
    private Vector3 initalBallPosition;

    // SerializeFields
    // Ball speed and Feedback delay time 
    [SerializeField] public float speed;
    [SerializeField] public float FEEDBACK_DELAY;
    // GameObjects
    [SerializeField] public GameObject Fixation;
    [SerializeField] public GameObject Ball;
    [SerializeField] public GameObject Floor;
    [SerializeField] public GameObject Goal;
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
    // private int sampling_rate = 0;

    // Experimental constants 
    KeyCode keyForMiStart = KeyCode.S;
    //UnityEngine.InputSystem.Controls.KeyControl useKeyForCue;

    // Start is called before the first frame update
    private void Update()
    {
        // Input.GetKeyDown(KeyCode.Keypad5)
        if (Input.GetKeyDown(keyForMiStart) && isWait)
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
            int board_id = useSyntheticBoard ? (int)BoardIds.SYNTHETIC_BOARD : (int)BoardIds.CYTON_BOARD;

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
        float timer, totalTrialDuration = 0.0f, waitEndTime;
        // float startTime, ballDistance
        List<string> keyEventListAllTime = new();

        isDelayFrame = true;

        board_shim.prepare_session();
        board_shim.start_stream(450000);

        for (int i = 0; i < trialAmount; i++)
        {
            timer = 0f;

            // 試行の最初にボールの位置を,ボールの初期位置(Inspectorで指定した位置)にする
            Ball.transform.position = initalBallPosition;

            Debug.Log($"===== Practice {i + 1} Started =====");

            Debug.Log($"Practice {i + 1}: Fixation period started");
            while (timer < 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                keyEventListAllTime.Add("0");

                // Display Fixation Cross (& hide Ball and Floor)
                Fixation.SetActive(true);
                Ball.SetActive(false);
                Floor.SetActive(false);
                Goal.SetActive(false);
            }

            Debug.Log($"Practice {i + 1}: Arbitrary waiting period start");

            Fixation.SetActive(false);
            Ball.SetActive(true);
            Floor.SetActive(true);
            Goal.SetActive(false);

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

            Debug.Log($"Practice {i + 1}: MI task period Start ");
            while (waitEndTime <= timer && timer < waitEndTime + 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                keyEventListAllTime.Add("0");

                if (isDelayFrame)
                {
                    yield return new WaitForFixedUpdate();
                    isDelayFrame = false;
                }
                Ball.transform.position += transform.forward * speed * Time.deltaTime;
            }

            // keyEvent側が1frame分多いので補正する
            keyEventListAllTime.RemoveAt(keyEventListAllTime.Count() - 1);

            totalTrialDuration += timer;

            Debug.Log($"Practice {i + 1} time: {timer}");
            Debug.Log($"===== Practice {i + 1} ended =====");
        }

        board_shim.stop_stream();
        board_shim.release_session();

        Debug.Log("Throw No Cue Practice Ended");
        Debug.Log("Total Time: " + totalTrialDuration);

        float AllTimePeriod = (float)keyEventListAllTime.Count() / 250;
        Debug.Log("Total Time Period: " + AllTimePeriod);

        // Writing key event log file
        string KeyEvent_file_path;

        if (isTest)
        {
            KeyEvent_file_path = $@"C:\GitProject\Traffic_Light\Exp_Event_Record\kick_vs_throw\test-{TestNumber}\sub-{SubjectNumber}\";
        }
        else
        {
            KeyEvent_file_path = $@"C:\GitProject\Traffic_Light\Exp_Event_Record\kick_vs_throw\sub-{SubjectNumber}\";
        }

        string KeyEvent_file_name = "ThrowKeyEvent_Practice.txt";

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
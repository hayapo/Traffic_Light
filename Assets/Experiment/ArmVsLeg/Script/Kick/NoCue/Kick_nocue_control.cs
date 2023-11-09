using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using UnityEngine.InputSystem;
using System;
using System.IO;
using System.Linq;
using brainflow;
using brainflow.math;

public class Kick_nocue_control : MonoBehaviour
{
    // Constants
    private int eachBlockTaskAmount = 6;
    private int blockAmount = 5;
    //private float timer, startTime, distance, totalTime;
    //private bool isForwardTrial = false;
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
    [SerializeField] private AudioSource BeepAudioSource;
    [SerializeField] private AudioClip BeepAudioClip;
    // Subject info
    [SerializeField] public string COM_PORT;
    [SerializeField] public bool isTest;
    [SerializeField] public bool useSyntheticBoard = false;
    [SerializeField] public bool isDevelop;
    [SerializeField] public int ExpNumber;
    [SerializeField] public int TestNumber;
    [SerializeField] public int SubjectNumber;

    // For OpenBCI Cyton board init
    private BoardShim board_shim = null;
    private int sampling_rate = 0;

    // Experimental constants 
    private int[] NO_FEEDBACK_TRIAL_LIST = new int[] { 2, 7, 18, 22, 29 };
    UnityEngine.InputSystem.Controls.KeyControl useKeyForCue;

    // Start is called before the first frame update
    private void Update()
    {
        if (useKeyForCue.wasPressedThisFrame && isWait)
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

        // OpenBCI board session preparing
        try
        {
            BoardShim.set_log_file($"brainflow_log_exp-{ExpNumber}_subject-{SubjectNumber}_kick_nocue.txt");
            BoardShim.enable_dev_board_logger();

            BrainFlowInputParams input_params = new BrainFlowInputParams();

            int board_id;

            if (isDevelop)
            {
                board_id = (int)BoardIds.SYNTHETIC_BOARD;
                useKeyForCue = Keyboard.current.fKey;
            }
            else
            {
                board_id = (int)BoardIds.CYTON_BOARD;
                useKeyForCue = Keyboard.current.numpad5Key;
            }

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
        float timer, startTime, distance, totalTime = 0.0f, waitEndTime;
        int totalTrialAmount = eachBlockTaskAmount * blockAmount;

        isDelayFrame = true;

        board_shim.prepare_session();
        board_shim.start_stream(450000, $"file://brainflow_data_exp-{ExpNumber}_subject-{SubjectNumber}_kick_nocue.csv:w");

        for (int i = 0; i < totalTrialAmount; i++)
        {
            timer = 0f;
            float durationMiTask = 0.0f;
            int currentBlock = i / eachBlockTaskAmount; //現在のブロック( 0 - 5 )を計算

            // float currentLoopTimer = 0f;
            // float totalDuration = 3.0f + 1.0f + NO_FEEDBACK_TRIAL_LIST[i] + 1.0f + 3.0f;

            // 試行の最初にボールの位置を
            // ボールの初期位置(Inspectorで指定した位置)にする
            Ball.transform.position = initalBallPosition;

            Debug.Log("===== Step " + (i + 1) + " Started =====");

            Debug.Log($"Step {i + 1}: Fixation period started");
            while (timer < 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

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
                yield return new WaitForFixedUpdate();
            }
            if (isCueKeyDown)
            {
                //keyEventListAll.Add("1");
                //keyEventList.Add("1");
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
                //keyEventListAll.Add("0");
                //keyEventList.Add("0");

                if (i+1 != NO_FEEDBACK_TRIAL_LIST[currentBlock])
                {
                    if (isDelayFrame)
                    {
                        yield return new WaitForFixedUpdate();
                        isDelayFrame = false;
                    }
                    Ball.transform.position += transform.forward * speed * Time.deltaTime;

                }
            }

            Debug.Log($"Step {i + 1}: mi task duration is {durationMiTask}");

            totalTime += timer;
            Debug.Log($"Step {i + 1} time: {timer}");
            Debug.Log($"===== Step {i + 1} ended =====");
        }
        board_shim.stop_stream();
        board_shim.release_session();
        Debug.Log("No Cue Exp Ended");
        Debug.Log("Total Time: " + totalTime);

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
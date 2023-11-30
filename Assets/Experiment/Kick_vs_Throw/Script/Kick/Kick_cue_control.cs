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

public class Kick_cue_control : MonoBehaviour
{
    // Constants
    private int eachBlockTaskAmount = 6;
    private int blockAmount = 5;
    [SerializeField] public float speed;
    [SerializeField] public float FEEDBACK_DELAY;
    private bool isDelayFrame;
    private Vector3 initalBallPosition;
    private string logFileName, rawdataFileName;

    // GameObjects
    [SerializeField] public GameObject Fixation;
    [SerializeField] public GameObject Ball;
    [SerializeField] public GameObject Floor;
    [SerializeField] private AudioSource BeepAudioSource;
    [SerializeField] private AudioClip BeepAudioClip;
    // AudioSource audioSource;

    // Subject info
    [SerializeField] public string COM_PORT;
    [SerializeField] public bool isTest;
    [SerializeField] public bool useSyntheticBoard = false;
    [SerializeField] public int ExpNumber;
    [SerializeField] public int TestNumber;
    [SerializeField] public int SubjectNumber;

    // For OpenBCI Cyton board init
    private BoardShim board_shim = null;
    //private int sampling_rate = board_shim.;

    // Experimental constants 
    private float[] WAIT_SECOND_LIST = new float[] {
        7.0f, 7.0f, 5.0f, 3.0f, 3.0f, 7.0f, 3.0f, 3.0f, 7.0f, 5.0f,
        5.0f, 7.0f, 5.0f, 3.0f, 7.0f, 7.0f, 3.0f, 3.0f, 7.0f, 5.0f,
        3.0f, 5.0f, 5.0f, 5.0f, 7.0f, 3.0f, 5.0f, 5.0f, 3.0f, 7.0f
    };
    private int[] NO_FEEDBACK_TRIAL_LIST = new int[] { 3, 8, 17, 22, 25 };

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        // audioSource = GetComponent<AudioSource>();
        initalBallPosition = Ball.transform.position;

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

                // Generate filename
                logFileName = $@"brainflow_log_kick-cue_test-{TestNumber}";
                rawdataFileName = $"brainflow_data_kick-cue_test-{TestNumber}";
            }
            else
            {
                board_id = (int)BoardIds.CYTON_BOARD;

                // Generate filename
                logFileName = $"brainflow_log_kick-cue_sub-{SubjectNumber}";
                rawdataFileName = $"brainflow_data_kick-cue_sub-{SubjectNumber}";
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
        isDelayFrame = true;

        float timer, totalTrialDuration = 0.0f;
        //float startTime, ballDistance
        //int currentBlock;

        int totalAmount = eachBlockTaskAmount * blockAmount;

        board_shim.prepare_session();
        board_shim.start_stream(450000, $"file://{rawdataFileName}.csv:w");

        for (int i = 0; i < totalAmount; i++)
        {
            // float currentLoopTimer = 0f;

            timer = 0f;
            float durationMiTask = 0.0f;
            int currentBlock = i / eachBlockTaskAmount;
            float perTrialDuration = 3.0f + 1.0f + WAIT_SECOND_LIST[i] + 1.0f + 3.0f;

            // 試行の最初にボールの位置を,ボールの初期位置(Inspectorで指定した位置)にする
            Ball.transform.position = initalBallPosition;

            Debug.Log("===== Step " + (i + 1) + " Started =====");

            while (timer < perTrialDuration)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 3.0f)
                {
                    Debug.Log($"Step {i + 1}: Fixation");
                    // Display fixation cross & undisplay Ball
                    Fixation.SetActive(true);
                    Ball.SetActive(false);
                    Floor.SetActive(false);
                }
                else if (timer >= 3.0f - 0.004f && timer <= 3.004f)
                {
                    board_shim.insert_marker(1);
                    Debug.Log($"Step {i + 1}: Beep sound ring for prepare");
                    Fixation.SetActive(false);
                    Ball.SetActive(true);
                    Floor.SetActive(true);
                    BeepAudioSource.PlayOneShot(BeepAudioClip);
                }

                else if (timer >= 3.0f + 1.0f - 0.004f && timer < 3.0f + 1.0f + 0.004f)
                {
                    Debug.Log($"Step {i + 1}: Started random time interval for waiting");
                }
                else if (timer > 3.0f + 1.0f + 0.004f && timer < 3.0f + 1.0f + WAIT_SECOND_LIST[i])
                {
                    Debug.Log($"Step {i + 1}: During random time interval for waiting");
                }

                else if (timer >= 3.0f + 1.0f + WAIT_SECOND_LIST[i] - 0.004f && timer <= 3.0f + 1.0f + WAIT_SECOND_LIST[i] + 0.004f)
                {
                    Debug.Log($"Step {i + 1}: Beep sound ring for starting motor imagery task");
                    board_shim.insert_marker(2);
                    BeepAudioSource.PlayOneShot(BeepAudioClip);
                }

                else if (timer > 3.0f + 1.0f + WAIT_SECOND_LIST[i] + 1.0f + 0.004f && timer <= perTrialDuration + 0.004f)
                {
                    Debug.Log($"Step {i + 1}: During motor imagery task");
                    durationMiTask += Time.deltaTime;
                    if (i + 1 != NO_FEEDBACK_TRIAL_LIST[currentBlock])
                    {
                        if (isDelayFrame)
                        {
                            yield return new WaitForSeconds(FEEDBACK_DELAY);
                            isDelayFrame = false;
                        }
                        Ball.transform.position += transform.forward * speed * Time.deltaTime;
                    }
                }
            }

            Debug.Log($"Step {i + 1}: mi task duration is {durationMiTask}");

            totalTrialDuration += timer;
            Debug.Log($"Step {i + 1} time: {timer}");
            Debug.Log($"===== Step {i + 1} ended =====");
            currentBlock += 1;
        }
        board_shim.stop_stream();
        board_shim.release_session();
        Debug.Log("Cue Exp Ended");
        Debug.Log("Total Time: " + totalTrialDuration);

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
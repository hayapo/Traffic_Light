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
    private int currentBlock;
    public float speed = 60.0f;
    public float FEEDBACK_DELAY = 0.50f;
    private float timer, startTime, distance, totalTime;
    private bool isForwardTrial = false;
    private bool isKeyDown = false;
    private bool isRest = false;
    private bool isDelayFrame;
    private Vector3 initalBallPosition;

    // GameObjects
    public GameObject Fixation;
    public GameObject Ball;
    AudioSource audioSource;

    // Subject info
    public string COM_PORT;
    public bool isTest;
    public bool useSyntheticBoard = false;
    public bool isDebug;
    public int ExpNumber;
    public int TestNumber;
    public int SubjectNumber;

    // For OpenBCI Cyton board init
    private BoardShim board_shim = null;
    private int sampling_rate = 0;

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
        audioSource = GetComponent<AudioSource>();
        initalBallPosition = Ball.transform.position;

        // OpenBCI board session preparing
        try
        {
            BoardShim.set_log_file($"brainflow_log_exp-{ExpNumber}_cue_subject-{SubjectNumber}.txt");
            BoardShim.enable_dev_board_logger();

            BrainFlowInputParams input_params = new BrainFlowInputParams();
            int board_id = (int)BoardIds.SYNTHETIC_BOARD;
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
        currentBlock = 0;
        totalTime = 0f;
        isDelayFrame = true;

        int totalAmount = eachBlockTaskAmount * blockAmount;

        board_shim.prepare_session();
        board_shim.start_stream(450000, $"file://brainflow_data_exp-{ExpNumber}_subject-{SubjectNumber}_kick_cue.csv:w");

        for (int i = 0; i < totalAmount; i++)
        {
            // float currentLoopTimer = 0f;
            float totalDuration = 3.0f + 1.0f + WAIT_SECOND_LIST[i] + 1.0f + 3.0f;
            Ball.transform.position = initalBallPosition;

            Debug.Log("===== Step " + (i + 1) + " Started =====");
            timer = 0f;
            float durationMiTask = 0.0f;

            currentBlock = i / eachBlockTaskAmount;

            while (timer < totalDuration)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 3.0f)
                {
                    Debug.Log($"Step {i + 1}: Fixation");
                    // Display fixation cross & undisplay Ball
                    Fixation.SetActive(true);
                    Ball.SetActive(false);
                }
                else if (timer >= 3.0f - 0.004f && timer <= 3.004f)
                {
                    board_shim.insert_marker(1);
                    Debug.Log($"Step {i + 1}: Beep sound ring for prepare");
                    Fixation.SetActive(false);
                    Ball.SetActive(true);
                    audioSource.PlayOneShot(audioSource.clip);
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
                    audioSource.PlayOneShot(audioSource.clip);
                }

                else if (timer > 3.0f + 1.0f + WAIT_SECOND_LIST[i] + 1.0f + 0.004f && timer <= totalDuration + 0.004f)
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

            totalTime += timer;
            Debug.Log($"Step {i + 1} time: {timer}");
            Debug.Log($"===== Step {i + 1} ended =====");
            currentBlock += 1;
        }
        board_shim.stop_stream();
        board_shim.release_session();
        Debug.Log("Cue Exp Ended");
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
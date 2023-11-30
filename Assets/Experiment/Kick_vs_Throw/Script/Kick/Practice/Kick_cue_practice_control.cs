using System.Collections;
using UnityEngine;
using UnityEditor;
using UnityEngine.InputSystem;
using brainflow;

public class Kick_cue_practice_control : MonoBehaviour
{

    // Constants
    private int trialAmount = 10;
    private bool isDelayFrame;
    private Vector3 initalBallPosition;
    private int WAIT_SECOND_PRACTICE = 3;

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
    [SerializeField] public int ExpNumber;
    [SerializeField] public int TestNumber;
    [SerializeField] public int SubjectNumber;

    // For OpenBCI Cyton board init
    private BoardShim board_shim = null;
    //private int sampling_rate = 0;

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        // audioSource = GetComponent<AudioSource>();
        initalBallPosition = Ball.transform.position;

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
        float timer, totalTrialDuration = 0.0f;
        isDelayFrame = true;

        board_shim.prepare_session();
        board_shim.start_stream(450000);

        for (int i = 0; i < trialAmount; i++)
        {
            // float currentLoopTimer = 0f;
            float perTrialDuration = 3.0f + 1.0f + WAIT_SECOND_PRACTICE + 1.0f + 3.0f;
            Ball.transform.position = initalBallPosition;

            Debug.Log("===== Practice " + (i + 1) + " Started =====");
            timer = 0f;
            float durationMiTask = 0.0f;

            while (timer < perTrialDuration)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 3.0f)
                {
                    Debug.Log($"Practice {i + 1}: Fixation");
                    // Display fixation cross & undisplay Ball
                    Fixation.SetActive(true);
                    Ball.SetActive(false);
                    Floor.SetActive(false);
                }
                else if (timer >= 3.0f - 0.004f && timer <= 3.004f)
                {
                    board_shim.insert_marker(1);
                    Debug.Log($"Practice {i + 1}: Beep sound ring for prepare");
                    Fixation.SetActive(false);
                    Ball.SetActive(true);
                    Floor.SetActive(true);
                    BeepAudioSource.PlayOneShot(BeepAudioClip);
                }

                else if (timer >= 3.0f + 1.0f - 0.004f && timer < 3.0f + 1.0f + 0.004f)
                {
                    Debug.Log($"Practice {i + 1}: Started random time interval for waiting");
                }
                else if (timer > 3.0f + 1.0f + 0.004f && timer < 3.0f + 1.0f + WAIT_SECOND_PRACTICE)
                {
                    Debug.Log($"Practice {i + 1}: During random time interval for waiting");
                }

                else if (timer >= 3.0f + 1.0f + WAIT_SECOND_PRACTICE - 0.004f && timer <= 3.0f + 1.0f + WAIT_SECOND_PRACTICE + 0.004f)
                {
                    Debug.Log($"Practice {i + 1}: Beep sound ring for starting motor imagery task");
                    board_shim.insert_marker(2);
                    BeepAudioSource.PlayOneShot(BeepAudioClip);
                }

                else if (timer > 3.0f + 1.0f + WAIT_SECOND_PRACTICE + 1.0f + 0.004f && timer <= perTrialDuration + 0.004f)
                {
                    Debug.Log($"Practice {i + 1}: During motor imagery task");
                    durationMiTask += Time.deltaTime;
                    if (isDelayFrame)
                    {
                        yield return new WaitForSeconds(FEEDBACK_DELAY);
                        isDelayFrame = false;
                    }
                    Ball.transform.position += transform.forward * speed * Time.deltaTime;
                }
            }

            Debug.Log($"Practice {i + 1}: mi task duration is {durationMiTask}");

            totalTrialDuration += timer;

            Debug.Log($"Practice {i + 1} time: {timer}");
            Debug.Log($"===== Practice {i + 1} ended =====");
        }
        board_shim.stop_stream();
        board_shim.release_session();
        Debug.Log("Kick Cue Practice Ended");
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
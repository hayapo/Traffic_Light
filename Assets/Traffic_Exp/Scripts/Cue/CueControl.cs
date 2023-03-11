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

public class CueControl : MonoBehaviour
{
    public GameObject Fixation;
    public GameObject TrafficLight;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Subject;
    public GameObject Ground;
    public GameObject LightRed;
    public GameObject LightGreen;
    public Material RedOn;
    public Material RedOff;
    public Material GreenOn;
    public Material GreenOff;

    public int eachBlockTaskAmount;
    public int blockAmount;
    public float speed;

    private float timer;
    private float startTime, distance;
    private float totaltime;
    private float feedbackDelay = 0.75f;
    private int currentBlock;
    private bool isForwardFrame;

    public int ExpNumber;
    public int SubjectNumber;

    private BoardShim board_shim = null;
    private int sampling_rate = 0;

    // [7, 7, 5, 3, 3, 7, 3, 3, 7, 5, 5, 7, 5, 3, 7, 7, 3, 3, 7, 5, 3, 5, 5, 5, 7, 3, 5, 5, 3, 7]
    // private float[] WAIT_SECOND_LIST = new float[] { 6.0f, 9.0f, 9.0f, 5.0f, 6.0f, 8.0f, 5.0f, 7.0f, 8.0f, 7.0f };
    private float[] WAIT_SECOND_LIST = new float[] {
        7.0f, 7.0f, 5.0f, 3.0f, 3.0f, 7.0f, 3.0f, 3.0f, 7.0f, 5.0f,
        5.0f, 7.0f, 5.0f, 3.0f, 7.0f, 7.0f, 3.0f, 3.0f, 7.0f, 5.0f,
        3.0f, 5.0f, 5.0f, 5.0f, 7.0f, 3.0f, 5.0f, 5.0f, 3.0f, 7.0f
    };

    // { 3, 2, 5, 4, 1 }
    private int[] PROBE_TRIAL_LIST = new int[] { 3, 8, 17, 22, 25 };

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Cue Condition Start");

        LightRed.GetComponent<MeshRenderer>().material = RedOff;
        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        Fixation.SetActive(false);
        TrafficLight.SetActive(false);
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        Ground.SetActive(false);

        try
        {
            BoardShim.set_log_file($"brainflow_log_exp-{ExpNumber}_cue_subject-{SubjectNumber}.txt");
            BoardShim.enable_dev_board_logger();

            BrainFlowInputParams input_params = new BrainFlowInputParams();
            // int board_id = (int)BoardIds.SYNTHETIC_BOARD;
            int board_id = (int)BoardIds.CYTON_BOARD;
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

    private IEnumerator LoopExp()
    {
        currentBlock = 0;
        totaltime = 0f;
        int totalAmount = eachBlockTaskAmount * blockAmount;

        if (board_shim == null)
        {
            yield break;
        }

        Debug.Log("Brainflow streaming was started");

        for (int i = 0; i < totalAmount; i++)
        {
            board_shim.prepare_session();
            isForwardFrame = true;

            float totalDuration = WAIT_SECOND_LIST[i] + 5.0f;
            float current_red_time = WAIT_SECOND_LIST[i] + 2.0f;
            float current_green_time = current_red_time + 3.0f;

            Subject.transform.position = new Vector3(0, 0, 0);
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
            Fixation.SetActive(false);
            TrafficLight.SetActive(false);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);
            Ground.SetActive(false);

            if (i % eachBlockTaskAmount == 0)
            {
                currentBlock += 1;
            }

            Debug.Log("===== Step " + (i+1) + " Started =====");

            timer = 0f;
            board_shim.start_stream(450000, $"file://brainflow_data_exp-{ExpNumber}_cue_subject-{SubjectNumber}_step-{i+1}.csv:w");

            while (timer < totalDuration)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 2.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                    Fixation.SetActive(true);
                    TrafficLight.SetActive(false);
                    Crossings.SetActive(false);
                    Sidewalks.SetActive(false);
                    Ground.SetActive(false);
                }

                else if (timer >= 1.996f && timer <= 2.004f)
                {
                    Debug.Log("Red On");
                }

                else if (timer >= 2.0f && timer < current_red_time)
                {
                    TrafficLight.SetActive(true);
                    Crossings.SetActive(true);
                    Sidewalks.SetActive(true);
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                    Fixation.SetActive(false);
                    Ground.SetActive(true);

                }

                else if (timer >= current_red_time - 0.004f && timer <= current_red_time + 0.004f)
                {
                    Debug.Log("Green On");
                    board_shim.insert_marker(i+1);
                }

                else if (timer >= current_red_time && timer < current_green_time)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOn;

                    if (i + 1 != PROBE_TRIAL_LIST[currentBlock - 1])
                    {
                        if (isForwardFrame)
                        {
                            yield return new WaitForSeconds(feedbackDelay);
                            isForwardFrame = false;
                        }
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                    }
                }

                else if (timer >= current_green_time - 0.004f && timer <= current_green_time + 0.004f)
                {
                    Debug.Log("Lights Off");
                }
            }
            board_shim.stop_stream();
            board_shim.release_session();

            totaltime += timer;
            Debug.Log("time: " + timer);

            Debug.Log("===== Step " + (i+1) + " ended =====");
        }
        board_shim.release_session();
        Debug.Log("Brainflow streaming was stoped!");

        Debug.Log("Cue Exp Ended");
        Debug.Log("Total Time: " + totaltime);

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

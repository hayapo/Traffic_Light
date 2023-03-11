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

public class RestControl : MonoBehaviour
{
    private float timer;
    public int SubjectNumber;
    public int ExpNumber;

    private BoardShim board_shim = null;
    private int sampling_rate = 0;

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Rest Scene Start");
        timer = 0f;

        try
        {
            BoardShim.set_log_file($"brainflow_log_exp-{ExpNumber}_rest_subject-{SubjectNumber}.txt");
            BoardShim.enable_dev_board_logger();

            BrainFlowInputParams input_params = new BrainFlowInputParams();
            // int board_id = (int)BoardIds.SYNTHETIC_BOARD;
            int board_id = (int)BoardIds.CYTON_BOARD;
            input_params.serial_port = "COM11";
            board_shim = new BoardShim(board_id, input_params);
            board_shim.prepare_session();
            sampling_rate = BoardShim.get_sampling_rate(board_id);
            Debug.Log("Brainflow session has started");
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

        Debug.Log("Start Rest Measurement");
        StartCoroutine(LoopExp());
    }

    // Update is called once per frame
    private IEnumerator LoopExp()
    {
        if (board_shim == null)
        {
            yield break;
        }

        Debug.Log("Brainflow streaming was started");
        board_shim.start_stream(450000, $"file://brainflow_data_exp-{ExpNumber}_rest_subject-{SubjectNumber}.csv:w");
        
        while (timer < 10.0f)
        {
            yield return new WaitForFixedUpdate();
            timer += Time.deltaTime;
        }

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
            EditorApplication.isPlaying = false;
            Application.Quit();
        }
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

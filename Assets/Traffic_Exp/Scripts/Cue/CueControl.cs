using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using System.Linq;

public class CueControl : MonoBehaviour
{
    public GameObject fixationCross;
    public GameObject TrafficLight;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Subject;
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
    private float feedbackDelay = 0.25f;
    private int currentBlock;
    private string StepEndedTimeText, StepStartTimeText, AllStepsEndedTimeText;
    private bool isForwardFrame;

    public bool isTest;
    public int ExpNumber;
    public int TestNumber;
    public int SubjectNumber;

    // [6, 9, 9, 5, 6, 8, 5, 7, 8, 7]
    //private float[] WAIT_SECOND_LIST = new float[] { 6.0f, 9.0f, 9.0f, 5.0f, 6.0f, 8.0f, 5.0f, 7.0f, 8.0f, 7.0f };
    private float[] WAIT_SECOND_LIST = Enumerable.Repeat(3.0f, 30).ToArray();

    // { 3, 2, 5, 4, 1 }
    private int[] PROBE_TRIAL_LIST = new int[] { 3, 8, 17, 22, 25 };

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Actual Scene Start");

        LightRed.GetComponent<MeshRenderer>().material = RedOff;
        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        fixationCross.SetActive(false);
        TrafficLight.SetActive(false);
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        AllStepsEndedTimeText = "";

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
        DateTime StepEndedTime;
        DateTime StepStartTime;
        DateTime AllStepsEndedTime;

        currentBlock = 0;
        totaltime = 0f;
        int totalAmount = eachBlockTaskAmount * blockAmount;

        List<string> startTimeList = new List<string>();

        for (int i = 0; i < totalAmount; i++)
        {
            isForwardFrame = true;

            float current_wait_second = WAIT_SECOND_LIST[i] + 5.0f;
            float current_red_time = WAIT_SECOND_LIST[i] + 2.0f;
            float current_green_time = current_red_time + 3.0f;

            Subject.transform.position = new Vector3(0, 0, 0);
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
            fixationCross.SetActive(false);
            TrafficLight.SetActive(false);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);

            if (i % eachBlockTaskAmount == 0)
            {
                currentBlock += 1;
            }

            Debug.Log("===== Step " + (i+1) + " Started =====");

            StepEndedTimeText = "";
            timer = 0f;

            StepStartTime = DateTime.Now;
            StepStartTimeText =
                StepStartTime.Hour.ToString() + ":" +
                StepStartTime.Minute.ToString() + ":" +
                StepStartTime.Second.ToString() + ":" +
                StepStartTime.Millisecond.ToString();
            startTimeList.Add(StepStartTimeText);

            while (timer < current_wait_second)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 2.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                    fixationCross.SetActive(true);
                    TrafficLight.SetActive(false);
                    Crossings.SetActive(false);
                    Sidewalks.SetActive(false);
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
                    fixationCross.SetActive(false);

                }

                else if (timer >= current_red_time - 0.004f && timer <= current_red_time + 0.004f)
                {
                    Debug.Log("Green On");
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
            totaltime += timer;
            Debug.Log("time: " + timer);

            StepEndedTime = DateTime.Now;
            StepEndedTimeText =
                StepEndedTime.Hour.ToString() + ":" +
                StepEndedTime.Minute.ToString() + ":" +
                StepEndedTime.Second.ToString() + ":" +
                StepEndedTime.Millisecond.ToString();

            Debug.Log("Step Ended Time: " + StepEndedTimeText);
            Debug.Log("===== Step " + (i+1) + " ended =====");
        }

        Debug.Log("Practice Step Ended");
        Debug.Log("Total Time: " + totaltime);

        AllStepsEndedTime = DateTime.Now;
        AllStepsEndedTimeText =
            AllStepsEndedTime.Hour.ToString() + ":" +
            AllStepsEndedTime.Minute.ToString() + ":" +
            AllStepsEndedTime.Second.ToString() + ":" +
            AllStepsEndedTime.Millisecond.ToString();
        Debug.Log("Steps Finished Time: " + AllStepsEndedTimeText);

        string StartTime_file_path = "";

        if (isTest)
        {
            StartTime_file_path = $@"C:\Gitproject\Traffic_Light\Exp_Event_Record\exp_{ExpNumber}\test_{TestNumber}\subject_{SubjectNumber}\";
        }
        else
        {
            StartTime_file_path = $@"C:\Gitproject\Traffic_Light\Exp_Event_Record\exp_{ExpNumber}\subject_{SubjectNumber}\";
        }

        string StartTime_file_name = "KeyEventAllTime.txt";

        Debug.Log(StartTime_file_path + StartTime_file_name);

        using (StreamWriter sw = new StreamWriter(StartTime_file_path + StartTime_file_name, false))
        {
            foreach (var line in startTimeList)
            {
                sw.WriteLine(line);
            }
        }

        EditorApplication.isPlaying = false;
        Application.Quit();
    }
}

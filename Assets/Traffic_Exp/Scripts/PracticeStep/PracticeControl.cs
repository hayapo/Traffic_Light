using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;

public class PracticeControl : MonoBehaviour
{
    public GameObject LightRed;
    public GameObject LightGreen;
    public GameObject Subject;
    public Material RedOn;
    public Material RedOff;
    public Material GreenOn;
    public Material GreenOff;
    private float timer;
    private float startTime, distance;
    private int stepCount;
    private Vector3 startPosition, targetPosition;
    public float speed;
    private float totaltime;
    private string StepEndedTimeText, StepStartTimeText;
    private string AllStepsEndedTimeText;

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Practice Scene Start");

        LightRed.GetComponent<MeshRenderer>().material = RedOff;
        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
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

        timer = 0f;
        totaltime = 0f;

        List<string> startTimeList = new List<string> ();

        Debug.Log("Start Loops");
        for (int i = 1; i <= 10; i++)
        {
            StepStartTimeText = "";
            StepEndedTimeText = "";

            timer = 0f;
            Debug.Log("===== Step "  + i + " Started =====");

            StepStartTime = DateTime.Now;
            StepStartTimeText =
                StepStartTime.Hour.ToString() + ":" +
                StepStartTime.Minute.ToString() + ":" +
                StepStartTime.Second.ToString() + ":" +
                StepStartTime.Millisecond.ToString();
            startTimeList.Add(StepStartTimeText);

            while (timer < 12.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 2.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 2.0f && timer < 7.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 7.0f && timer < 10.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }

                else if (timer >= 10.0f)
                {
                    Subject.transform.position = new Vector3(0, 0, 0);
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                // yield return null;
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
            Debug.Log("===== Step " + i + " ended =====");
        }

        Debug.Log("Practice Step Ended");
        Debug.Log("Total Time: " +  totaltime);
        AllStepsEndedTime = DateTime.Now;
        AllStepsEndedTimeText =
            AllStepsEndedTime.Hour.ToString() + ":" +
            AllStepsEndedTime.Minute.ToString() + ":" +
            AllStepsEndedTime.Second.ToString() + ":" +
            AllStepsEndedTime.Millisecond.ToString();

        string start_time_file = @"C:\Gitproject\Traffic_Light_Time\test_2\subject_3\practice\start_time.txt";
        File.WriteAllLines(start_time_file, startTimeList);
        Debug.Log("Steps Finished Time: " + AllStepsEndedTimeText);
        SceneManager.LoadScene("MidStep");
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;

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
    private Vector3 startPosition, targetPosition;
    public float speed;
    private float totaltime;
    private string StepEndedTimeText;
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
        DateTime AllStepsEndedTime;

        timer = 0f;
        totaltime = 0f;
        Debug.Log("Start Loops");
        for (int i = 1; i <= 10; i++) {
            StepEndedTimeText = "";

            timer = 0f;
            Debug.Log("Step "  + i + " Started");
            while (timer < 16.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                if (timer < 3.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 3.0f && timer < 8.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 8.0f && timer < 13.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }

                else if (timer >= 13.0f)
                {
                    Subject.transform.position = new Vector3(0, 0, 0);
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                // yield return null;
            }
            totaltime += timer;
            Debug.Log("time: " + timer);
            Debug.Log("Step " + i + " ended");

            StepEndedTime = DateTime.Now;
            StepEndedTimeText =
                StepEndedTime.Hour.ToString() + ":" +
                StepEndedTime.Minute.ToString() + ":" +
                StepEndedTime.Second.ToString() + ":" +
                StepEndedTime.Millisecond.ToString();
            Debug.Log("Step Ended Time: " + StepEndedTimeText);
        }
        Debug.Log("Practice Step Ended");
        Debug.Log("Total Time: " +  totaltime);
        AllStepsEndedTime = DateTime.Now;
        AllStepsEndedTimeText =
            AllStepsEndedTime.Hour.ToString() + ":" +
            AllStepsEndedTime.Minute.ToString() + ":" +
            AllStepsEndedTime.Second.ToString() + ":" +
            AllStepsEndedTime.Millisecond.ToString();
        Debug.Log("Steps Finished Time: " + AllStepsEndedTimeText);
        SceneManager.LoadScene("MidStep");
    }
}
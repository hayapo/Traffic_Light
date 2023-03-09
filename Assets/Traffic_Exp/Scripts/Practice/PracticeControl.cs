using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;

public class PracticeControl : MonoBehaviour
{
    public GameObject Fixation;
    public GameObject TrafficLight;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Ground;
    public GameObject Subject;
    public GameObject LightRed;
    public GameObject LightGreen;
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

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Practice Start");

        LightRed.GetComponent<MeshRenderer>().material = RedOff;
        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        Fixation.SetActive(false);
        TrafficLight.SetActive(false);
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        Ground.SetActive(false);

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
        timer = 0f;
        totaltime = 0f;

        Debug.Log("Start Loops");
        for (int i = 1; i <= 10; i++)
        {
            timer = 0f;

            Subject.transform.position = new Vector3(0, 0, 0);
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
            Fixation.SetActive(false);
            TrafficLight.SetActive(false);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);
            Ground.SetActive(false);

            Debug.Log("===== Step "  + i + " Started =====");

            while (timer < 8.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;

                if (timer < 2.0f)
                {
                    Fixation.SetActive(true);
                    TrafficLight.SetActive(false);
                    Crossings.SetActive(false);
                    Sidewalks.SetActive(false);
                    Ground.SetActive(false);
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 2.0f && timer < 5.0f)
                {
                    Fixation.SetActive(false);
                    TrafficLight.SetActive(true);
                    Crossings.SetActive(true);
                    Sidewalks.SetActive(true);
                    Ground.SetActive(true);
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 5.0f && timer < 8.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }

                else if (timer >= 8.0f)
                {
                    Subject.transform.position = new Vector3(0, 0, 0);
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                // yield return null;
            }
            totaltime += timer;
            Debug.Log("time: " + timer);

            Debug.Log("===== Step " + i + " ended =====");
        }

        Debug.Log("Practice Step Ended");
        Debug.Log("Total Time: " +  totaltime);
        EditorApplication.isPlaying = false;
        Application.Quit();
    }
}
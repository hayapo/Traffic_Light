using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using System.Linq;

public class noCuePracticeControl : MonoBehaviour
{
    public GameObject fixationCross;
    public GameObject Crossings;
    public GameObject Sidewalks;
    public GameObject Subject;
    public GameObject Ground;
    public float speed;
    public float FEEDBACK_DELAY = 0.75f;
    public bool isTest;
    public int ExpNumber;
    public int TestNumber;
    public int SubjectNumber;

    private float taskStart;
    private float restEnd;
    private float taskStartTime;

    private bool isForwardFrame;
    private bool isKeyDown;
    private bool isRest = false;

    private bool probeTest;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Keypad5) && isRest)
        {
            isKeyDown = true;
        }
    }

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("noCue Practice Start");
        isKeyDown = false;
        isRest = false;
        Crossings.SetActive(false);
        Sidewalks.SetActive(false);
        fixationCross.SetActive(false);
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

    // Update is called once per frame
    private IEnumerator LoopExp()
    {
        int totalAmount = 10;
        float totalDuration = 0;

        for (int i = 0; i < totalAmount; i++)
        {
            Subject.transform.position = new Vector3(0, 0, 0);
            Crossings.SetActive(false);
            Sidewalks.SetActive(false);
            fixationCross.SetActive(false);
            Ground.SetActive(false);
            isForwardFrame = true;
            isKeyDown = false;
            isRest = false;

            float timer = 0f;
            float trialDuration = 0;

            Debug.Log("===== Step " + (i + 1) + " Started =====");

            Debug.Log("Fixation Start");
            while (timer < 2.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                fixationCross.SetActive(true);
            }

            fixationCross.SetActive(false);
            Crossings.SetActive(true);
            Sidewalks.SetActive(true);
            Ground.SetActive(true);
            Debug.Log("Rest Start");
            isRest = true;

            //while (!Input.GetKeyDown(Keypad5)) // Keypad5
            //{
            //    timer += Time.deltaTime;
            //    keyEventListAll.Add("0");
            //    yield return new WaitForFixedUpdate();
            //}

            while (!isKeyDown)
            {
                timer += Time.deltaTime;
                yield return new WaitForFixedUpdate();
            }

            if (isKeyDown)
            {
                isKeyDown = false;
            }

            restEnd = timer;
            isRest = false;

            Debug.Log("MI Task Start");
            while (restEnd <= timer && timer < restEnd + 3.0f)
            {
                yield return new WaitForFixedUpdate();
                timer += Time.deltaTime;
                Debug.Log(timer);

                if (isForwardFrame)
                {
                    yield return new WaitForSeconds(FEEDBACK_DELAY);
                    isForwardFrame = false;
                }
                Subject.transform.position += transform.forward * speed * Time.deltaTime;
            }

            trialDuration += timer;
            totalDuration += trialDuration;
            Debug.Log("Total Time: " + trialDuration);

            Debug.Log("===== Step " + (i + 1) + " Ended =====");
        }

        Debug.Log("Total Time: " + totalDuration);

        EditorApplication.isPlaying = false;
        Application.Quit();
    }
}

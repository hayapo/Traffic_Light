using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class ActualControl : MonoBehaviour
{
    public GameObject LightRed;
    public GameObject LightGreen;
    //public GameObject Subject;
    public Material RedOn;
    public Material RedOff;
    public Material GreenOn;
    public Material GreenOff;
    private float timer;
    private float startTime, distance;
    //private Vector3 startPosition, targetPosition;
    public float speed;
    public float[] WAIT_SECOND_LIST;

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Actual Scene Start");

        Debug.Log("Wait for Start");
        while (!Input.GetKeyDown(KeyCode.S))
        {
            yield return null;
        }
        Debug.Log("Wait Ended");
        yield return new WaitForSeconds(3);
        Debug.Log("Start Loop");
        StartCoroutine(LoopExp());
    }

    private IEnumerator LoopExp()
    {
        timer = 0f;
        WAIT_SECOND_LIST = new float[] { 8.0f, 6.0f, 6.0f, 7.0f, 5.0f, 7.0f, 7.0f, 5.0f, 5.0f, 7.0f, 9.0f, 9.0f, 9.0f, 8.0f, 6.0f, 5.0f, 6.0f, 8.0f, 9.0f, 8.0f };

        for (int i = 1; i <= 20; i++)
        {
            timer = 0f;
            float current_wait_second = WAIT_SECOND_LIST[i - 1] + 11.0f;
            while (timer < current_wait_second)
            {
                timer += Time.deltaTime;

                if (timer < 3f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 3f && timer < 8f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                else if (timer >= 8f && timer < 13f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
                    //Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }

                else if (timer >= 13f)
                {
                    //Subject.transform.position = new Vector3(0, 0, 0);
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                yield return null;
            }
            Debug.Log("time: " + timer);
            Debug.Log("Step " + i + " ended");
        }
        Debug.Log("Step Ended");
        EditorApplication.isPlaying = false;
        Application.Quit();

    }

    // Update is called once per frame
    //private void Update()
    //{
    //    timer += Time.deltaTime;

    //    if (i == 10)
    //    {
    //        Debug.Log("Step Ended");
    //        EditorApplication.isPlaying = false;
    //        Application.Quit();
    //    }

    //    if (timer < 3f)
    //    {
    //        LightRed.GetComponent<MeshRenderer>().material = RedOff;
    //        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
    //    }
    //    if (timer >= 3f && timer < 8f)
    //    {
    //        LightRed.GetComponent<MeshRenderer>().material = RedOn;
    //        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
    //    }
    //    if (timer >= 8f && timer < 13f)
    //    {
    //        LightRed.GetComponent<MeshRenderer>().material = RedOff;
    //        LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
    //        Subject.transform.position += transform.forward * speed * Time.deltaTime;
    //    }
    //    if (timer >= 13f)
    //    {
    //        Subject.transform.position = new Vector3(0, 0, 0);
    //        LightRed.GetComponent<MeshRenderer>().material = RedOn;
    //        LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
    //    }
    //    if (timer > 16f)
    //    {
    //        Debug.Log("time: " + timer);
    //        timer = 0f;
    //        i++;
    //        Debug.Log("Step " + i + " ended");
    //    }
    //}
}

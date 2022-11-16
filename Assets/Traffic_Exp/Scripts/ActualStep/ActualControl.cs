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
    private float startTime, distance, totalDuration;
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
        StartCoroutine(LoopExp());
    }

    private IEnumerator LoopExp()
    {
        timer = 0f;
        // [6, 9, 9, 5, 6, 8, 5, 7, 8, 7]
        WAIT_SECOND_LIST = new float[] { 6.0f, 9.0f, 9.0f, 5.0f, 6.0f, 8.0f, 5.0f, 7.0f, 8.0f, 7.0f };
        int stepCount = 0;
        for (int i = 0; i < 10; i++)
        {
            timer = 0f;
            stepCount = i + 1;
            float current_wait_second = WAIT_SECOND_LIST[i] + 7.0f;
            float current_red_time = WAIT_SECOND_LIST[i] + 2.0f;
            float current_green_time = current_red_time + 3.0f;

            Debug.Log("Step " + stepCount + " start");
            while (timer < current_wait_second)
            {
                timer += Time.deltaTime;

                if (timer < 2.0f)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }
                else if (timer >= 1.999f && timer <= 2.001f)
                {
                    Debug.Log("Red On");
                }
                else if (timer >= 2.0f && timer < current_red_time)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }
                else if (timer >= current_red_time - 0.001f && timer <= current_red_time + 0.001f)
                {
                    Debug.Log("Green On");
                }
                else if (timer >= current_red_time && timer < current_green_time)
                {
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
                    //Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }
                else if (timer >= current_green_time - 0.001f && timer <= current_green_time + 0.001f)
                {
                    Debug.Log("Lights Off");
                }
                else if (timer >= current_green_time)
                {
                    //Subject.transform.position = new Vector3(0, 0, 0);
                    LightRed.GetComponent<MeshRenderer>().material = RedOff;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                yield return null;
            }
            Debug.Log("time: " + timer);
            Debug.Log("Step " + stepCount + " ended");
            totalDuration += timer;
        }
        Debug.Log("Step Ended");
        Debug.Log("Total Duration: " + totalDuration);
        EditorApplication.isPlaying = false;
        Application.Quit();
    }
}

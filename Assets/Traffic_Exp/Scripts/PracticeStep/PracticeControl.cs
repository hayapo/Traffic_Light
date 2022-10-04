using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;

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

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        Debug.Log("Practice Scene Start");

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

        for (int i = 1; i <= 10; i++) {
            timer = 0f;
            while (timer < 16.0f)
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
                    Subject.transform.position += transform.forward * speed * Time.deltaTime;
                }

                else if (timer >= 13f)
                {
                    Subject.transform.position = new Vector3(0, 0, 0);
                    LightRed.GetComponent<MeshRenderer>().material = RedOn;
                    LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
                }

                yield return null;
            }
            Debug.Log("time: " + timer);
            Debug.Log("Step " + i + " ended");
        }
        Debug.Log("Practice Step Ended");
        SceneManager.LoadScene("MidStep");
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
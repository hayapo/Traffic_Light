using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    private int i;
    private float startTime, distance;
    private Vector3 startPosition, targetPosition;
    public float speed;

    // Start is called before the first frame update
    void Start()
    {
        i = 0;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;

        if (i == 10)
        {
            Debug.Log("Step Ended");
            Application.Quit();
        }

        if (timer < 5f)
        {
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        }
        if (timer >= 5f && timer < 10f)
        {
            LightRed.GetComponent<MeshRenderer>().material = RedOn;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        }
        if (timer >= 10f && timer < 15f)
        {
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
            Subject.transform.position += transform.forward * speed * Time.deltaTime;
        }
        if (timer > 15f)
        {
            timer = 0f;
            Subject.transform.position = new Vector3(0, 0, 0);
            i++;
            Debug.Log("Step " + i + " ended");
        }
    }

}
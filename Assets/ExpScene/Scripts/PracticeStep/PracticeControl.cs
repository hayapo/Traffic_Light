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
        Debug.Log("Steps Start!!!");
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

        if (timer < 3f)
        {
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        }
        if (timer >= 3f && timer < 8f)
        {
            LightRed.GetComponent<MeshRenderer>().material = RedOn;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        }
        if (timer >= 8f && timer < 13f)
        {
            LightRed.GetComponent<MeshRenderer>().material = RedOff;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOn;
            Subject.transform.position += transform.forward * speed * Time.deltaTime;
        }
        if (timer >= 13f)
        {
            Subject.transform.position = new Vector3(0, 0, 0);
            LightRed.GetComponent<MeshRenderer>().material = RedOn;
            LightGreen.GetComponent<MeshRenderer>().material = GreenOff;
        }
        if (timer > 16f)
        {
            timer = 0f;
            i++;
            Debug.Log("Step " + i + " ended");
        }
    }

}
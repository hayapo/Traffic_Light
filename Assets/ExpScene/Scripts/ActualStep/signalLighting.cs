using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class signalLighting : MonoBehaviour
{
    public GameObject LightRed;
    public GameObject LightGreen;
    public Material RedOn;
    public Material RedOff;
    public Material GreenOn;
    public Material GreenOff;
    private float timer;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;

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
        }
        if (timer > 15f)
        {
            timer = 0f;
        }
    }
}

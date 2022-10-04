using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BeforePractice : MonoBehaviour
{
    void Start()
    {
    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
            Debug.Log("Load Practice Scene");
            SceneManager.LoadScene("PracticeStep");
        }
    }
}

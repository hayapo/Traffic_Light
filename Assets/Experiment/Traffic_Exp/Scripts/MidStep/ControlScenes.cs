using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;

public class ControlScenes : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            SceneManager.LoadScene("BeforePractice");
        }
        if (Input.GetKeyDown(KeyCode.A))
        {
            SceneManager.LoadScene("BeforeActual");
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            EditorApplication.isPlaying = false;
            Application.Quit();
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetCameraPos : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Vector3 posi = this.transform.position;

        Debug.Log("x = " + posi.x);
        Debug.Log("y = " + posi.y);
        Debug.Log("z = " + posi.z);
    }

    // Update()ÇÕè»ó™
}
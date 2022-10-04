using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransformLocker : MonoBehaviour
{
    bool mIsInitialization;

    public Vector3 initialPosition;
    public Quaternion initialRotation;

    void Start()
    {
        initialPosition = transform.position;
        initialRotation = transform.rotation;
    }


    void OnValidate()
    {
#if UNITY_EDITOR
        if (!mIsInitialization)
        {
            UnityEditor.EditorApplication.update -= SceneUpdateCallback;
            UnityEditor.EditorApplication.update += SceneUpdateCallback;
            mIsInitialization = true;
        }
#endif
    }

    void Reset()
    {
#if UNITY_EDITOR
        if (!mIsInitialization)
        {
            UnityEditor.EditorApplication.update -= SceneUpdateCallback;
            UnityEditor.EditorApplication.update += SceneUpdateCallback;
            mIsInitialization = true;
        }
#endif
    }

#if UNITY_EDITOR
    void SceneUpdateCallback()
    {
        try
        {
            transform.GetHashCode();
        }
        catch
        {
            UnityEditor.EditorApplication.update -= SceneUpdateCallback;
            return;
        }

        transform.position = initialPosition;
        transform.rotation = initialRotation;
    }
#endif
}
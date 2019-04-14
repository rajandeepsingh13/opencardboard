using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class draw : MonoBehaviour {

    private int currMat = 0;

    private Material[] sparksList = new Material[3];

    private float prevTime = (float)0.0;

    private float delta = (float)0.1;

    private GameObject stick;

    // Use this for initialization
    void Start () {
        /*
        GameObject go = new GameObject();
        currLine = go.AddComponent<LineRenderer>();
        currLine.SetWidth((float)0.1, (float)0.1);
        */       
        sparksList[0] = (Material)Resources.Load("Sparks", typeof(Material));
        sparksList[1] = (Material)Resources.Load("Sparks 1", typeof(Material));
        sparksList[2] = (Material)Resources.Load("Sparks 2", typeof(Material));

    }



    // Update is called once per frame
    void Update()
    {




        if (Time.time - prevTime > delta)
        {
            prevTime = Time.time;
            currMat = (currMat + 1) % 3;
            this.GetComponent<MeshRenderer>().material = sparksList[currMat];
        }

    }
}

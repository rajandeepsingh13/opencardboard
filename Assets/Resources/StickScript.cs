using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StickScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        GameObject sparks = GameObject.FindWithTag("sparks");

        this.transform.position = sparks.transform.position;
        this.transform.rotation = sparks.transform.rotation;
    }
}

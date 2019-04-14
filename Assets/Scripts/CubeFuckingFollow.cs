using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeFuckingFollow : MonoBehaviour {

    Transform MainCamVRPlayer;

	// Use this for initialization
	void Start () {
        MainCamVRPlayer = GameObject.FindGameObjectWithTag("vrp").transform.Find("Main Camera");

    }
	
	// Update is called once per frame
	void Update () {
        transform.position = MainCamVRPlayer.position;
	}
}

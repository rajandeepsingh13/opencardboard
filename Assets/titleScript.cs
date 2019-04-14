using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class titleScript : MonoBehaviour {

    public GameObject titleCoverPrefab;

    private GameObject titleCover;

    private float titleDuration = 5.0f;

    private float alpha = 0.0f;

	// Use this for initialization
	void Start () {

        titleCover = Instantiate(titleCoverPrefab);

        var material = GetComponent<Renderer>().material;
        var color = material.color;

        color.a = alpha;

        material.color = color;

    }
	
	// Update is called once per frame
	void Update () {

        if (Time.time > titleDuration && alpha <= 1.0)
        {
            var material = titleCover.GetComponent<Renderer>().material;
            var color = material.color;

            color.a = alpha;

            material.color = color;

            alpha += 0.01f;
        }
        else if (alpha == 1.0)
        {
            titleCover.SetActive(false);

            this.gameObject.SetActive(false);
        }
    }
}

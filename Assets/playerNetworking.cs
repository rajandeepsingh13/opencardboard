using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerNetworking : MonoBehaviour {

    [SerializeField] private GameObject playerCamera;
    [SerializeField]private MonoBehaviour[] scriptsToIgnore;

	private PhotonView photonView;

	void Start() {
		photonView = GetComponent<PhotonView>();
		Initialize();
	}

	void Initialize() {
		if (photonView.isMine) {

		} else {
			foreach (MonoBehaviour item in scriptsToIgnore) {
				item.enabled=false;
			}
		}
	}
}

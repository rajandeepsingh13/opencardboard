using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class photonManager : Photon.MonoBehaviour
{
    [SerializeField]
    private GameObject vrPlayer;

    public GameObject t;

    public GameObject p;

    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.ConnectUsingSettings("1.0");


        t = GameObject.FindGameObjectWithTag("print");
        t.GetComponent<Text>().text = "attempt to connect";

        p = GameObject.FindGameObjectWithTag("players");
        p.GetComponent<Text>().text = "0";
        
    }
    
    void OnConnectedToMaster()
    {
        t.GetComponent<Text>().text = "connect!!";
    }

    void OnJoinedLobby()
    {
        t.GetComponent<Text>().text = "create room";
        PhotonNetwork.JoinOrCreateRoom("Room", new RoomOptions() { MaxPlayers=2}, TypedLobby.Default);
        
    }

    // Update is called once per frame
    void OnJoinedRoom()
    {
        
        //PhotonNetwork.Instantiate("Sphere", vrPlayer.transform.position, Quaternion.identity, 0);
        t.GetComponent<Text>().text = "joined room!";

    }

    private void Update()
    {
        p.GetComponent<Text>().text = PhotonNetwork.countOfPlayers.ToString();
    }
}

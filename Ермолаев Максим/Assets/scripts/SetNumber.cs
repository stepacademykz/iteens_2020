using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class SetNumber : MonoBehaviour
{
    public GameObject t1;
    public GameObject t2;
    public GameObject t3;
    public GameObject t4;
    public GameObject t5;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void setText()
    {
        GameObject camera = GameObject.Find("Main Camera");
        fileLoad FL = camera.GetComponent<fileLoad>();

        FL.PeopleAuto = int.Parse(t1.GetComponent<UnityEngine.UI.Text>().text);
        FL.PeopleAutoMid = int.Parse(t2.GetComponent<UnityEngine.UI.Text>().text);
        FL.PeopleCargo = int.Parse(t3.GetComponent<UnityEngine.UI.Text>().text);
        FL.PeopleBus = int.Parse(t4.GetComponent<UnityEngine.UI.Text>().text);
        FL.PeopleCycle = int.Parse(t5.GetComponent<UnityEngine.UI.Text>().text);
    }
}

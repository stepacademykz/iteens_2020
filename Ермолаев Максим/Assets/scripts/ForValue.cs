using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class ForValue : MonoBehaviour
{
    public int variant;
    public float value;
    public float finV;
    public float FinValue;
    public GameObject graph;


    // Start is called before the first frame update
    void Start()
    {
        
        Graph FL = graph.GetComponent<Graph>();
        value = FL.vars[variant] * FL.people[variant] * FL.k[variant];
        UnityEngine.Debug.Log(FL.vars);
    }

    // Update is called once per frame
    void Update()
    {
        if (variant != 10)
        {
            Graph FL = graph.GetComponent<Graph>();
            value = (FL.vars[variant] * FL.people[variant] * FL.k[variant]) / 1000;
            finV += (value - finV) / 10;
            Text txt = GetComponent<Text>();
            txt.text = (Mathf.Round(finV)).ToString() + " тонн CO2";
        }
        else 
        {
            Graph FL = graph.GetComponent<Graph>();
            value = ((FL.vars[0] * FL.people[0] * FL.k[0]) + 
                (FL.vars[1] * FL.people[1] * FL.k[1])+
                (FL.vars[2] * FL.people[2] * FL.k[2])+ 
                (FL.vars[3] * FL.people[3] * FL.k[3])+ 
                (FL.vars[4] * FL.people[4] * FL.k[4])) / 18632169;
            finV += (value - finV) / 10;
            Text txt = GetComponent<Text>();
            txt.text = (Mathf.Round(finV)).ToString() + " кг CO2 на одного человека";
        }
    }
}

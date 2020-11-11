using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Diagnostics;
using System.IO;
using System.Runtime.Versioning;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class fileLoad : MonoBehaviour
{
    string path;
    private int progress = 0;

    public Text PeopleText;
    public Text YearText;
    public Text MonthText;
    public Text DayText;

    public GameObject T1;
    public GameObject T2;
    public GameObject T3;
    public GameObject T4;
    public GameObject T5;

    public GameObject IsReady;

    public int YearAuto;
    public int YearAutoMid;
    public int YearCargo;
    public int YearBus;
    public int YearCycle;

    public int MonthAuto;
    public int MonthAutoMid;
    public int MonthCargo;
    public int MonthBus;
    public int MonthCycle;

    public int DayAuto;
    public int DayAutoMid;
    public int DayCargo;
    public int DayBus;
    public int DayCycle;

    public int People;
    public int PeopleAuto;
    public int PeopleAutoMid;
    public int PeopleCargo;
    public int PeopleBus;
    public int PeopleCycle;



    // Start is called before the first frame update
    void Start()
    {
        IsReady.SetActive(false);
    }

    public void InputYear()
    {
        path = EditorUtility.OpenFilePanel("Overwrite with txt", "", "txt");
        UnityEngine.Debug.Log(path);
        var fYear = new StreamReader(path);

        YearAuto = int.Parse(fYear.ReadLine());
        YearAutoMid = int.Parse(fYear.ReadLine());
        YearCargo = int.Parse(fYear.ReadLine());
        YearBus = int.Parse(fYear.ReadLine());
        YearCycle = int.Parse(fYear.ReadLine());
        progress++;
        fYear.Close();
        YearText.GetComponent<UnityEngine.UI.Text>().text = "Загрузка завершена!";
    }
    public void InputMonth()
    {
        path = EditorUtility.OpenFilePanel("Overwrite with txt", "", "txt");
        UnityEngine.Debug.Log(path);
        var fMonth = new StreamReader(path);

        MonthAuto = int.Parse(fMonth.ReadLine());
        MonthAutoMid = int.Parse(fMonth.ReadLine());
        MonthCargo = int.Parse(fMonth.ReadLine());
        MonthBus = int.Parse(fMonth.ReadLine());
        MonthCycle = int.Parse(fMonth.ReadLine());
        progress++;
        fMonth.Close();
        MonthText.GetComponent<UnityEngine.UI.Text>().text = "Загрузка завершена!";
    }
    public void InputDay()
    {
        path = EditorUtility.OpenFilePanel("Overwrite with txt", "", "txt");
        UnityEngine.Debug.Log(path);
        var fDay = new StreamReader(path);

        DayAuto = int.Parse(fDay.ReadLine());
        DayAutoMid = int.Parse(fDay.ReadLine());
        DayCargo = int.Parse(fDay.ReadLine());
        DayBus = int.Parse(fDay.ReadLine());
        DayCycle = int.Parse(fDay.ReadLine());
        progress++;
        fDay.Close();
        DayText.GetComponent<UnityEngine.UI.Text>().text = "Загрузка завершена!";

    }
    public void InputPeople()
    {
        path = EditorUtility.OpenFilePanel("Overwrite with txt", "", "txt");
        UnityEngine.Debug.Log(path);
        var fPeople = new StreamReader(path);

        People = int.Parse(fPeople.ReadLine());
        PeopleAuto = int.Parse(fPeople.ReadLine());
        PeopleAutoMid = int.Parse(fPeople.ReadLine());
        PeopleCargo = int.Parse(fPeople.ReadLine());
        PeopleBus = int.Parse(fPeople.ReadLine());
        PeopleCycle = int.Parse(fPeople.ReadLine());
        progress++;
        fPeople.Close();
        PeopleText.GetComponent<UnityEngine.UI.Text>().text = "Загрузка завершена!";
    }

    public void NextScene()
    {
        int de;
        string Te1 = T1.GetComponent<TMP_InputField>().text;
        string Te2 = T2.GetComponent<TMP_InputField>().text;
        string Te3 = T3.GetComponent<TMP_InputField>().text;
        string Te4 = T4.GetComponent<TMP_InputField>().text;
        string Te5 = T5.GetComponent<TMP_InputField>().text;
        UnityEngine.Debug.Log(Te1);

        PeopleAuto = int.Parse(Te1);
        PeopleAutoMid = int.Parse(Te2);
        PeopleCargo = int.Parse(Te3);
        PeopleBus = int.Parse(Te4);
        PeopleCycle = int.Parse(Te5);

        DontDestroyOnLoad(this);
        SceneManager.LoadScene("test");
    }



    // Update is called once per frame
    void FixedUpdate()
    {
        if (progress == 0) 
        {
            IsReady.SetActive(true);
        }
    }

    public void setText()
    {
        
        string Te1 = T1.GetComponent<TextMeshPro>().text;
        string Te2 = T2.GetComponent<TextMeshPro>().text;
        string Te3 = T3.GetComponent<TextMeshPro>().text;
        string Te4 = T4.GetComponent<TextMeshPro>().text;
        string Te5 = T5.GetComponent<TextMeshPro>().text;

        PeopleAuto = int.Parse(Te1);
        PeopleAutoMid = int.Parse(Te2);
        PeopleCargo = int.Parse(Te3);
        PeopleBus = int.Parse(Te4);
        PeopleCycle = int.Parse(Te5);
}
}

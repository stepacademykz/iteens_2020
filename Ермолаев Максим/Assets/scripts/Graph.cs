using System.CodeDom;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Security.Cryptography;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Graph : MonoBehaviour
{
    private RectTransform graphContainer;
    public float[] vars = new float[5];
    public float[] people = new float[5];
    public float[] k = new float[5];
    [SerializeField] private Sprite scircle;
    public GameObject[] Garray = new GameObject[9];
    public float yMaximum;
    private void Awake()
    {
        
        graphContainer = transform.Find("graphContainer").GetComponent<RectTransform>();
        vars[0] = 0;
        vars[1] = 0;
        vars[2] = 0;
        vars[3] = 0;
        vars[4] = 0;
    }

    private GameObject CreateCircle(Vector2 anchoredPosition)
    {
        GameObject gameObject = new GameObject("circle", typeof(Image));
        gameObject.transform.SetParent(graphContainer, false);
        gameObject.GetComponent<Image>().sprite = scircle;
        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = anchoredPosition;
        rectTransform.sizeDelta = new Vector2(11, 11);
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMax = new Vector2(0, 0);
        Garray = GOAdd(Garray, gameObject);
        return gameObject;
    }

    public static GameObject[] GOAdd(GameObject[] Array, GameObject Obj)
    {
        GameObject[] NewArray = new GameObject[Array.Length + 1];
        for (int i = 0; i <= Array.Length; i++)
        {
            if (i == Array.Length)
                NewArray[i] = Obj;
            else
                NewArray[i] = Array[i];
        }
        return NewArray;
    }

    public void ShowGraph(int variant) 
    {
        GameObject camera = GameObject.Find("Main Camera");
        fileLoad FL = camera.GetComponent<fileLoad>();

        for (int j = 0; j < Garray.Length; j++)
        {
            Destroy(Garray[j]);
        }

        people[0] = FL.PeopleAuto;
        people[1] = FL.PeopleAutoMid;
        people[2] = FL.YearCargo;
        people[3] = FL.YearBus;
        people[4] = FL.YearCycle;

        k[0] = 0.158642f;
        k[1] = 0.199352f;
        k[2] = 0.290802f;
        k[3] = 0.1398f;
        k[4] = 0.24021f;

        switch (variant) 
        {
            case 1:
                vars[0] = FL.YearAuto;
                vars[1] = FL.YearAutoMid;
                vars[2] = FL.YearCargo;
                vars[3] = FL.YearBus;
                vars[4] = FL.YearCycle;
                break;
            case 2:
                vars[0] = FL.MonthAuto;
                vars[1] = FL.MonthAutoMid;
                vars[2] = FL.MonthCargo;
                vars[3] = FL.MonthBus;
                vars[4] = FL.MonthCycle;
                break;
            case 3:
                vars[0] = FL.DayAuto;
                vars[1] = FL.DayAutoMid;
                vars[2] = FL.DayCargo;
                vars[3] = FL.DayBus;
                vars[4] = FL.DayCycle;
                break;
            default:
                vars[0] = 0;
                vars[1] = 0;
                vars[2] = 0;
                vars[3] = 0;
                vars[4] = 0;
                break;
        }

        float gHeight = graphContainer.sizeDelta.y;
        float Xsize = 250f;
        yMaximum = vars.Max() * people.Max() * k.Max();

        GameObject lastCircleGameObject = null;
        for (int i = 0; i < 5; i++)
        {
            float xPosition = i * Xsize;
            float yPosition = (vars[i] * people[i] * k[i]) / yMaximum * 500;
            GameObject circleGameObject = CreateCircle(new Vector2(xPosition, yPosition));
            if (lastCircleGameObject != null)
            {
                CreateDotConnection(lastCircleGameObject.GetComponent<RectTransform>().anchoredPosition, circleGameObject.GetComponent<RectTransform>().anchoredPosition);
            }
            lastCircleGameObject = circleGameObject;
        }




    }

    private void FixedUpdate() 
    {
        

    }

    private void CreateDotConnection(Vector2 dotPositionA, Vector2 dotPositionB)
    {
        GameObject gameObject = new GameObject("dotCon", typeof(Image));
        gameObject.transform.SetParent(graphContainer, false);
        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
        Vector2 dir = (dotPositionB - dotPositionA).normalized;
        float distance = Vector2.Distance(dotPositionA, dotPositionB);
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMax = new Vector2(0, 0);
        rectTransform.sizeDelta = new Vector2(distance, 3f);
        rectTransform.anchoredPosition = dotPositionA + dir * distance * 0.5f;
        float angle = (dir.y < 0 ? -Mathf.Acos(dir.x) : Mathf.Acos(dir.x)) * Mathf.Rad2Deg;
        rectTransform.localEulerAngles = new Vector3(0, 0, angle);
        Garray = GOAdd(Garray, gameObject);
    }

    public void NextScene()
    {
        SceneManager.LoadScene("SampleScene");
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class canvasManager : MonoBehaviour
{
    string subjectID = "test";
    int currentCanvas = 1;
    int currentTrials = 95;
    Canvas canvas1;
    Canvas canvas2;
    Canvas canvas3;
    InputField a1;
    InputField a2;
    GameObject CSVHandlerObject;
    csvHandler csvHandler;
    StreamWriter sw;


    // Start is called before the first frame update
    void Start()
    {
        CSVHandlerObject = GameObject.Find("CSVHandler");
        csvHandler = CSVHandlerObject.GetComponent<csvHandler>();

        sw = new StreamWriter(@"Assets\" + subjectID + "Result.csv") { AutoFlush = true };

        canvas1 = GameObject.Find("Canvas1").GetComponent<Canvas>();
        canvas2 = GameObject.Find("Canvas2").GetComponent<Canvas>();
        canvas3 = GameObject.Find("Canvas3").GetComponent<Canvas>();

        a1 = GameObject.Find("a1").GetComponent<InputField>();
        a2 = GameObject.Find("a2").GetComponent<InputField>();

        canvas1.enabled = true;
        canvas2.enabled = false;
        canvas3.enabled = false;
        Debug.Log("canvas disabled");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.C))
        {   
            if (currentCanvas == 1)
            {
                canvas1.enabled = false;
                canvas2.enabled = true;
                currentCanvas += 1;
            }

            else if (currentCanvas == 2 &&
                     a1.text != "" &&
                     a2.text != "")
            {
                csvHandler.csvData[currentTrials][3] = a1.text;
                csvHandler.csvData[currentTrials][4] = a2.text;

                Debug.Log(csvHandler.csvData[currentTrials][0]
                    + " " + csvHandler.csvData[currentTrials][1]
                    + " " + csvHandler.csvData[currentTrials][2]
                    + " " + csvHandler.csvData[currentTrials][3]
                    + " " + csvHandler.csvData[currentTrials][4]);

                a1.text = "";
                a2.text = "";

                sw.WriteLine(string.Join(",", csvHandler.csvData[currentTrials]));            

                canvas2.enabled = false;
                canvas1.enabled = true;
                currentCanvas = 1;
                currentTrials += 1;
            }

            if(currentTrials >= 100)
            {
                canvas1.enabled = false;
                canvas2.enabled = false;
                canvas3.enabled = true;

                sw.Close();
            }
        }

        if(currentCanvas == 2)
        {
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                a1.text = "Å™";
            }
            if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                a1.text = "Å´";
            }
            if (Input.GetKeyDown(KeyCode.RightArrow))
            {
                a1.text = "Å®";
            }
            if (Input.GetKeyDown(KeyCode.LeftArrow))
            {
                a1.text = "Å©";
            }

            if (Input.GetKeyDown(KeyCode.Keypad1))
            {
                a2.text = "1";
            }
            if (Input.GetKeyDown(KeyCode.Keypad2))
            {
                a2.text = "2";
            }
            if (Input.GetKeyDown(KeyCode.Keypad3))
            {
                a2.text = "3";
            }
            if (Input.GetKeyDown(KeyCode.Keypad4))
            {
                a2.text = "4";
            }
            if (Input.GetKeyDown(KeyCode.Keypad5))
            {
                a2.text = "5";
            }
        }
    }
}

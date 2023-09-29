using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Threading.Tasks;

public class canvasManager : MonoBehaviour
{
    int currentCanvas = 0;
    int currentTrials = 0;
    Canvas canvasStart;
    Canvas canvas1;
    Canvas canvas2_0;
    Canvas canvas2_1;
    Canvas canvas2_2;
    Canvas canvas3;
    InputField a1;
    InputField a2;
    InputField IDInputField;
    GameObject csvHandlerObject;
    csvHandler csvHandler;
    GameObject pinArrayManagerObject;
    pinArrayManager pinArrayManager;
    StreamWriter sw;


    // Start is called before the first frame update
    void Start()
    {
        csvHandlerObject = GameObject.Find("CSVHandler");
        csvHandler = csvHandlerObject.GetComponent<csvHandler>();
        pinArrayManagerObject = GameObject.Find("serialManager");
        pinArrayManager = pinArrayManagerObject.GetComponent<pinArrayManager>();

        canvasStart = GameObject.Find("CanvasStart").GetComponent<Canvas>();
        canvas1 = GameObject.Find("Canvas1").GetComponent<Canvas>();
        canvas2_0 = GameObject.Find("Canvas2_0").GetComponent<Canvas>();
        canvas2_1 = GameObject.Find("Canvas2_1").GetComponent<Canvas>();
        canvas2_2 = GameObject.Find("Canvas2_2").GetComponent<Canvas>();
        canvas3 = GameObject.Find("Canvas3").GetComponent<Canvas>();

        a1 = GameObject.Find("a1").GetComponent<InputField>();
        a2 = GameObject.Find("a2").GetComponent<InputField>();
        IDInputField = GameObject.Find("IDInputField").GetComponent<InputField>();

        canvasStart.enabled = true;
        canvas1.enabled = false;
        canvas2_0.enabled = false;
        canvas2_1.enabled = false;
        canvas2_2.enabled = false;
        canvas3.enabled = false;

        pinArrayManager.serialPinArray.Write("a");//M5Stackを実験1のモードにする
    }

    // Update is called once per frame
    void Update()
    {
        //ページ送りの処理
        if (Input.GetKeyDown(KeyCode.KeypadEnter))
        {   
            if (currentCanvas == 0 &&
                IDInputField.text != "")
            {
                sw = new StreamWriter(@"Assets\" + IDInputField.text + "_Result_ex1.csv") { AutoFlush = true };

                canvasStart.enabled = false;
                canvas1.enabled = true;
                currentCanvas += 1;
            }

            else if (currentCanvas == 1)
            {
                //Debug.Log(int.Parse(csvHandler.csvData[currentTrials][1]));
                if (0 <= int.Parse(csvHandler.csvData[currentTrials][1]) &&
                         int.Parse(csvHandler.csvData[currentTrials][1]) <= 3)
                {
                    canvas1.enabled = false;
                    canvas2_0.enabled = true;
                    canvas2_1.enabled = true;
                    currentCanvas += 1;
                }
                else
                {
                    canvas1.enabled = false;
                    canvas2_0.enabled = true;
                    canvas2_2.enabled = true;
                    currentCanvas += 1;
                }
            }
            //CSVに回答を書き込む
            else if (currentCanvas == 2 &&
                     a1.text != "" &&
                     a2.text != "")
            {
                csvHandler.csvData[currentTrials][3] = a1.text;
                csvHandler.csvData[currentTrials][4] = a2.text;
                csvHandler.csvData[currentTrials][5] = Time.time.ToString();

                //Debug.Log(csvHandler.csvData[currentTrials][0]
                //    + " " + csvHandler.csvData[currentTrials][1]
                //    + " " + csvHandler.csvData[currentTrials][2]
                //    + " " + csvHandler.csvData[currentTrials][3]
                //    + " " + csvHandler.csvData[currentTrials][4]);

                a1.text = "";
                a2.text = "";

                sw.WriteLine(string.Join(",", csvHandler.csvData[currentTrials]));

                canvas2_0.enabled = false;
                canvas2_1.enabled = false;
                canvas2_2.enabled = false;
                canvas1.enabled = true;
                currentCanvas = 1;
                currentTrials += 1;
            }

            //実験終了
            if (currentTrials >= 100)
            {
                canvas1.enabled = false;
                canvas2_0.enabled = false;
                canvas2_1.enabled = false;
                canvas2_2.enabled = false;
                canvas3.enabled = true;

                sw.Close();
            }
        }
        //回答のインプットフィールドの制御
        if (currentCanvas == 2)
        {
            if (0 <= int.Parse(csvHandler.csvData[currentTrials][1]) &&
                     int.Parse(csvHandler.csvData[currentTrials][1]) <= 3)
            {
                if (Input.GetKeyDown(KeyCode.RightArrow))
                {
                    a1.text = "→";
                }
                if (Input.GetKeyDown(KeyCode.LeftArrow))
                {
                    a1.text = "←";
                }
            }
            else
            {
                if (Input.GetKeyDown(KeyCode.UpArrow))
                {
                    a1.text = "↑";
                }
                if (Input.GetKeyDown(KeyCode.DownArrow))
                {
                    a1.text = "↓";
                }
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

        if (Input.GetKeyDown(KeyCode.Keypad0))
        {
            //Debug.Log(csvHandler.csvData[currentTrials][1] + ", " + csvHandler.csvData[currentTrials][2]);
            drivePin(csvHandler.csvData[currentTrials][1], 0);
            drivePin(csvHandler.csvData[currentTrials][2], 1600);

        }
        async void drivePin(string s, int delay)
        {
            await Task.Delay(delay);
            pinArrayManager.serialPinArray.Write(s);
        }
    }
}

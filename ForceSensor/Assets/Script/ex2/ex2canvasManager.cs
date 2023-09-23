using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Threading.Tasks;

public class ex2canvasManager : MonoBehaviour
{
    int currentCanvas = 0;
    int currentTrials = 0;
    Canvas canvasStart;
    Canvas canvas1;
    Canvas canvas2;
    Canvas canvas3;
    InputField a1;
    InputField IDInputField;
    GameObject csvHandlerObject;
    ex2csvHandler csvHandler;
    GameObject pinArrayManagerObject;
    pinArrayManager pinArrayManager;
    StreamWriter sw;
    


    // Start is called before the first frame update
    void Start()
    {
        csvHandlerObject = GameObject.Find("CSVHandler");
        csvHandler = csvHandlerObject.GetComponent<ex2csvHandler>();
        pinArrayManagerObject = GameObject.Find("serialManager");
        pinArrayManager = pinArrayManagerObject.GetComponent<pinArrayManager>();

        canvasStart = GameObject.Find("CanvasStart").GetComponent<Canvas>();
        canvas1 = GameObject.Find("Canvas1").GetComponent<Canvas>();
        canvas2 = GameObject.Find("Canvas2").GetComponent<Canvas>();
        canvas3 = GameObject.Find("Canvas3").GetComponent<Canvas>();

        IDInputField = GameObject.Find("IDInputField").GetComponent<InputField>();
        a1 = GameObject.Find("a1").GetComponent<InputField>();

        canvasStart.enabled = true;
        canvas1.enabled = false;
        canvas2.enabled = false;
        canvas3.enabled = false;

        pinArrayManager.serialPinArray.Write("b");//M5Stackを実験2のモードにする
    }

    // Update is called once per frame
    void Update()
    {
        //ページ送りの処理
        if (Input.GetKeyDown(KeyCode.C))
        {
            if (currentCanvas == 0 &&
                IDInputField.text != "")
            {
                sw = new StreamWriter(@"Assets\" + IDInputField.text + "_Result_ex2.csv") { AutoFlush = true };

                canvasStart.enabled = false;
                canvas1.enabled = true;
                currentCanvas += 1;
            }
            else if (currentCanvas == 1)
            {
                Debug.Log(int.Parse(csvHandler.csvData[currentTrials][1]));
                if (0 <= int.Parse(csvHandler.csvData[currentTrials][1]) &&
                         int.Parse(csvHandler.csvData[currentTrials][1]) <= 3)
                {
                    canvas1.enabled = false;
                    canvas2.enabled = true;
                    currentCanvas += 1;
                }
                else
                {
                    canvas1.enabled = false;
                    canvas2.enabled = true;
                    currentCanvas += 1;
                }
            }
            //CSVに回答を書き込む
            else if (currentCanvas == 2 &&
                     a1.text != "")
            {
                csvHandler.csvData[currentTrials][2] = a1.text;

                Debug.Log(csvHandler.csvData[currentTrials][0]
                    + " " + csvHandler.csvData[currentTrials][1]
                    + " " + csvHandler.csvData[currentTrials][2]);

                a1.text = "";

                sw.WriteLine(string.Join(",", csvHandler.csvData[currentTrials]));

                canvas2.enabled = false;
                canvas1.enabled = true;
                currentCanvas = 1;
                currentTrials += 1;
            }

            //実験終了
            if (currentTrials >= 80)
            {
                canvas1.enabled = false;
                canvas2.enabled = false;
                canvas3.enabled = true;

                sw.Close();
            }
        }
        //回答のインプットフィールドの制御
        if (currentCanvas == 2)
        {
            if (Input.GetKeyDown(KeyCode.RightArrow))
            {
                a1.text = "→";
            }
            if (Input.GetKeyDown(KeyCode.LeftArrow))
            {
                a1.text = "←";
            }
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                a1.text = "↑";
            }
            if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                a1.text = "↓";
            }
        }

        if (Input.GetKeyDown(KeyCode.X))
        {
            Debug.Log(csvHandler.csvData[currentTrials][1]);
            drivePin(csvHandler.csvData[currentTrials][1], 0);

        }
        async void drivePin(string s, int delay)
        {
            await Task.Delay(delay);
            pinArrayManager.serialPinArray.Write(s);
        }
    }
}

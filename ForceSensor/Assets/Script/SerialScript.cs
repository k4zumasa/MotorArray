using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
//using System.IO;
using System.IO.Ports;
using System;
using System.Threading;
using System.Linq;

public class SerialScript : MonoBehaviour
{
    Text fx, fy, fz;
    Scrollbar forceBar;
    Button forceIndicator;
    public int flag_rev=0;

    //エディターでパラメータは操作可能
    public string portName = "COM4";
    public int baudRate = 921600;

    private SerialPort serial;
    private Thread _thread;
    public bool isRunning = false;

    private string message;
    private byte[] sendMessage = new byte[25];

    //private bool isNewDataReceived = false;

    double[] sensi = new double[6];
    int[] inivals = new int[6];
    int[] measuredvals = new int[6];
    public double[] data = new double[6];
    // Start is called before the first frame update
    void Start()
    {
        //fx = GameObject.Find("label_fx").GetComponent<Text>();
        //fy = GameObject.Find("label_fy").GetComponent<Text>();
        //fz = GameObject.Find("label_fz").GetComponent<Text>();

        forceBar = GameObject.Find("forceBar").GetComponent<Scrollbar>();
        forceIndicator = GameObject.Find("forceIndicator").GetComponent<Button>();
        Open();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            GetInitVal();
        }

        if(2.5<=(float)(data[2] * -1) && (float)(data[2] * -1) <= 3.5)
        {
            forceIndicator.image.color = Color.green;
        }
        else
        {
            forceIndicator.image.color = Color.gray;
        }

        refreshBarVal((float)(data[2] / 6 * -1));
    }
    private void OnDestroy()
    {
        Close();
    }

    private void FixedUpdate()
    {
        
        
        if (flag_rev == 1)//主軸感度＆ゼロ点出力値取得
        {
            Debug.Log("Initialized");
            GetSensitivity();//主軸感度取得
            
            GetInitVal();//ゼロ点出力値取得
            flag_rev = 2;

        }
        if (flag_rev == 2)//出力トルクを計測．おそらく10秒
        {
            GetMeasuredVal();//出力トルク計測
            //Debug.Log("Open2");
            //Debug.Log(data[2]);
            
            
        }


    }
    public void Open()//シリアルポート開放
    {
        serial = new SerialPort(portName, baudRate, Parity.None, 8, StopBits.One);
        serial.Open();
        //Debug.Log("Open1");

    }
    
    public string[] str = new string[6];
    public void GetSensitivity()
    {//主軸感度取得
        serial.DiscardInBuffer();
        serial.Write("p");
        Thread.Sleep(1);
        string tmp = serial.ReadLine();//主軸感度を取得
        str = tmp.Split(',');//コンマ区切りを分割

        sensi[0] = double.Parse(str[0]);
        sensi[1] = double.Parse(str[1]);
        sensi[2] = double.Parse(str[2]);
        sensi[3] = double.Parse(str[3]);
        sensi[4] = double.Parse(str[4]);
        sensi[5] = double.Parse(str[5]);

    }

    private void GetInitVal()
    {
        serial.DiscardInBuffer();
        serial.Write("R");
        Thread.Sleep(1);
        string tmp = serial.ReadLine();

        inivals[0] = Convert.ToInt32(tmp.Substring(1, 4), 16);
        inivals[1] = Convert.ToInt32(tmp.Substring(5, 4), 16);
        inivals[2] = Convert.ToInt32(tmp.Substring(9, 4), 16);
        inivals[3] = Convert.ToInt32(tmp.Substring(13, 4), 16);
        inivals[4] = Convert.ToInt32(tmp.Substring(17, 4), 16);
        inivals[5] = Convert.ToInt32(tmp.Substring(21, 4), 16);      

    }

    private void GetMeasuredVal()
    {
        serial.DiscardInBuffer();
        serial.Write("R");
        Thread.Sleep(1);
        string tmp = serial.ReadLine();

        measuredvals[0] = Convert.ToInt32(tmp.Substring(1, 4), 16);
        measuredvals[1] = Convert.ToInt32(tmp.Substring(5, 4), 16);
        measuredvals[2] = Convert.ToInt32(tmp.Substring(9, 4), 16);
        measuredvals[3] = Convert.ToInt32(tmp.Substring(13, 4), 16);
        measuredvals[4] = Convert.ToInt32(tmp.Substring(17, 4), 16);
        measuredvals[5] = Convert.ToInt32(tmp.Substring(21, 4), 16);

        data[0] = (double)(measuredvals[0] - inivals[0]) / sensi[0];
        data[1] = (double)(measuredvals[1] - inivals[1]) / sensi[1];
        data[2] = (double)(measuredvals[2] - inivals[2]) / sensi[2];
        data[3] = (double)(measuredvals[3] - inivals[3]) / sensi[3];
        data[4] = (double)(measuredvals[4] - inivals[4]) / sensi[4];
        data[5] = (double)(measuredvals[5] - inivals[5]) / sensi[5];
        

    }

    public void Send(string data)
    {
        if (serial.IsOpen)
        {
            serial.Write(data);
        }
    }

    private void Close()
    {
        isRunning = false;
        if (_thread != null && _thread.IsAlive)
        {
            _thread.Join();
        }
        if (serial != null && serial.IsOpen)
        {
            serial.Close();
            serial.Dispose();
        }
    }

    private void refreshBarVal(float value)
    {
        forceBar.value = (float)(data[2] / 6 * -1);
    }
}

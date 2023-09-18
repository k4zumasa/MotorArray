using System.Collections;
using System.Collections.Generic;
using UnityEngine;


using UnityEngine.UI;
using System.IO.Ports;
using System.Threading;
using System;
public class SerialScripts : MonoBehaviour
{
    public string portName = "COM3";
    public int baudRate = 115200;
    Text status;
    private SerialPort serial;
    public bool isRunning = false;
    // Start is called before the first frame update
    void Start()
    {
        status = GameObject.Find("lb_status").GetComponent<Text>();
        //Open();
    }
    public void Open(string name)//シリアルポート開放
    {
        serial = new SerialPort(name, baudRate, Parity.None, 8, StopBits.One);
        serial.Open();

        if (serial.IsOpen)
        {
            isRunning = true;
            status.text = "Connected";
            //Debug.Log("Open1!");

        }        

    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Send(int command)
    {
        if (serial.IsOpen) {
            serial.Write(command.ToString());
        }        
    }

    private void OnDestroy()
    {
        Close();
    }
    private void Close()
    {
        isRunning = false;

        if (serial != null && serial.IsOpen)
        {
            serial.Close();
            serial.Dispose();
        }

    }
}

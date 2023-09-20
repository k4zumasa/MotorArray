using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using System.IO.Ports;
using System;
using System.Threading;
using System.Linq;

public class pinArrayManager : MonoBehaviour
{
    string portName = "COM3";
    int baudRate = 115200;

    private SerialPort serial;
    private string message;

    // Start is called before the first frame update
    void Start()
    {
        serial = new SerialPort(portName, baudRate, Parity.None, 8, StopBits.One);
        serial.Open();
        serial.Write("1");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

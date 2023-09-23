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

    public SerialPort serialPinArray;
    private string message;

    // Start is called before the first frame update
    void Start()
    {
        serialPinArray = new SerialPort(portName, baudRate, Parity.None, 8, StopBits.One);
        serialPinArray.Open();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

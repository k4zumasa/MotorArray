using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using System.IO.Ports;
using System.Threading;
using System;
public class ComScript : MonoBehaviour
{
    Dropdown dd_port;
    string[] port_names;
    // Start is called before the first frame update
    void Start()
    {
        ObtainNames();
    }
    public void ObtainNames()
    {
        dd_port = GameObject.Find("ports").GetComponent<Dropdown>();
        port_names = SerialPort.GetPortNames();

        if (port_names[0] != null)
        {
            dd_port.ClearOptions();
            foreach (string name in port_names)
            {
                dd_port.options.Add(new Dropdown.OptionData { text = name });
            }
            //Debug.Log(dd_port.options[dd_port.value].text);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

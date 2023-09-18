using System.Collections;
using System.Collections.Generic;
using UnityEngine;


using UnityEngine.UI;
using UnityEngine.EventSystems;
public class OnClickScript : MonoBehaviour
{
    SerialScripts serial;
    Dropdown dd_port;
    Text period,intensity,mode;
    string[] labels={"60","50","40","30","20","1","2","3","4"};
    // Start is called before the first frame update
    void Start()
    {
        serial = GameObject.Find("SerialManger").GetComponent<SerialScripts>();
        dd_port = GameObject.Find("ports").GetComponent<Dropdown>();
        period=GameObject.Find("lb_period").GetComponent<Text>();
        intensity=GameObject.Find("lb_intensity").GetComponent<Text>();
        mode=GameObject.Find("lb_mode").GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnClickConnect(Button sender) {
        if (sender != null)
        {
            string btn = "bt_connect";
            if (sender.name == btn)
            {
                if (dd_port.options[dd_port.value].text != null) {
                    serial.Open(dd_port.options[dd_port.value].text);
                }
            }
        }
    }
    public void OnClickCommand(Button sender)
    {
        if (sender != null)
        {
            for (int i = 0; i <= 12; i++)
            {
                string btn = "btn_com" + i.ToString();
                if (sender.name == btn)
                {
                    serial.Send(i);
                    setLabel(i);
                    Debug.Log(i);
                }
            }
        }
    }

    void setLabel(int num){
        if(num>0 && num<=5){
            period.text=labels[num-1];
        }
        else if (num>=6 && num<=9){
            intensity.text=labels[num-1];
        }
        else if (num == 10){
            mode.text="1方向";
        }
        else if (num == 11){
            mode.text="交互";
        }
        // Debug.Log(num);
    }
}

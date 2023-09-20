using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class csvHandler : MonoBehaviour
{
    private TextAsset csvFile; // CSVファイル
    public List<string[]> csvData = new List<string[]>(); // CSVファイルの中身を入れるリスト

    // Start is called before the first frame update
    void Start()
    {
        csvFile = Resources.Load("Sample") as TextAsset; // ResourcesにあるCSVファイルを格納
        StringReader reader = new StringReader(csvFile.text); // TextAssetをStringReaderに変換

        while (reader.Peek() != -1)
        {
            string line = reader.ReadLine(); // 1行ずつ読み込む
            csvData.Add(line.Split(',')); // csvDataリストに追加する
        }

        for (int i = 0; i < csvData.Count; i++) // csvDataリストの条件を満たす値の数（全て）
        {
            // データの表示
            //Debug.Log(csvData[i][0] + " " + csvData[i][1] + " " + csvData[i][2]);

        }
    }
        // Update is called once per frame
        void Update()
    {
        
    }

    void Shuffle(List<string[]> trialList)
    {
        for (int i = 0; i < trialList.Count; i++)
        {
            string temp1 = trialList[i][1]; // 現在の要素を預けておく
            string temp2 = trialList[i][2];
            int randomIndex1 = Random.Range(0, trialList.Count); // 入れ替える先をランダムに選ぶ
            int randomIndex2 = Random.Range(0, trialList.Count);
            trialList[i][1] = trialList[randomIndex1][1]; // 現在の要素に上書き
            trialList[i][2] = trialList[randomIndex2][2];
            trialList[randomIndex1][1] = temp1;
            trialList[randomIndex1][2] = temp2;// 入れ替え元に預けておいた要素を与える
        }
    }
}

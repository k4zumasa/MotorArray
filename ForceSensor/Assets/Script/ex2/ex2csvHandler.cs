using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ex2csvHandler : MonoBehaviour
{
    private TextAsset csvFile; // CSVファイル
    public List<List<string>> csvData = new List<List<string>>(); // CSVファイルの中身を入れるリスト


    // Start is called before the first frame update
    void Start()
    {
        csvFile = Resources.Load("ex2_trials") as TextAsset; // ResourcesにあるCSVファイルを格納
        StringReader reader = new StringReader(csvFile.text); // TextAssetをStringReaderに変換

        while (reader.Peek() != -1)
        {
            string line = reader.ReadLine(); // 1行ずつ読み込む
            List<string> lineList = new List<string>(line.Split(','));
            csvData.Add(lineList); // csvDataリストに追加する
        }

        addColumn(csvData);
        ShuffleList(csvData);

        for (int i = 0; i < csvData.Count; i++) // csvDataリストの条件を満たす値の数（全て）
        {
            // データの表示
            Debug.Log(csvData[i][0] + " " + csvData[i][0]);

        }
    }
        // Update is called once per frame
        void Update()
    {
        
    }

    void addColumn(List<List<string>> trialList)
    {
        for (int i = 0; i < trialList.Count; i++)
        {
            trialList[i].Add("");
        }
    }

    void ShuffleList(List<List<string>> list)
    {
        // 列の数を取得します。
        int columnCount = list.Count;

        // 列をシャッフルします。
        for (int i = 0; i < columnCount; i++)
        {
            int randomIndex = i + Random.Range(0, columnCount - i);
            List<string> temp = list[i];
            list[i] = list[randomIndex];
            list[randomIndex] = temp;
        }
    }
}

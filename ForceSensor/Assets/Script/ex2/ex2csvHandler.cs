using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ex2csvHandler : MonoBehaviour
{
    private TextAsset csvFile; // CSV�t�@�C��
    public List<List<string>> csvData = new List<List<string>>(); // CSV�t�@�C���̒��g�����郊�X�g


    // Start is called before the first frame update
    void Start()
    {
        csvFile = Resources.Load("ex2_trials") as TextAsset; // Resources�ɂ���CSV�t�@�C�����i�[
        StringReader reader = new StringReader(csvFile.text); // TextAsset��StringReader�ɕϊ�

        while (reader.Peek() != -1)
        {
            string line = reader.ReadLine(); // 1�s���ǂݍ���
            List<string> lineList = new List<string>(line.Split(','));
            csvData.Add(lineList); // csvData���X�g�ɒǉ�����
        }

        addColumn(csvData);
        ShuffleList(csvData);

        for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
        {
            // �f�[�^�̕\��
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
        // ��̐����擾���܂��B
        int columnCount = list.Count;

        // ����V���b�t�����܂��B
        for (int i = 0; i < columnCount; i++)
        {
            int randomIndex = i + Random.Range(0, columnCount - i);
            List<string> temp = list[i];
            list[i] = list[randomIndex];
            list[randomIndex] = temp;
        }
    }
}

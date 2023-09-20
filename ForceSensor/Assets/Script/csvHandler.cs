using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class csvHandler : MonoBehaviour
{
    private TextAsset csvFile; // CSV�t�@�C��
    public List<string[]> csvData = new List<string[]>(); // CSV�t�@�C���̒��g�����郊�X�g

    // Start is called before the first frame update
    void Start()
    {
        csvFile = Resources.Load("Sample") as TextAsset; // Resources�ɂ���CSV�t�@�C�����i�[
        StringReader reader = new StringReader(csvFile.text); // TextAsset��StringReader�ɕϊ�

        while (reader.Peek() != -1)
        {
            string line = reader.ReadLine(); // 1�s���ǂݍ���
            csvData.Add(line.Split(',')); // csvData���X�g�ɒǉ�����
        }

        for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
        {
            // �f�[�^�̕\��
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
            string temp1 = trialList[i][1]; // ���݂̗v�f��a���Ă���
            string temp2 = trialList[i][2];
            int randomIndex1 = Random.Range(0, trialList.Count); // ����ւ����������_���ɑI��
            int randomIndex2 = Random.Range(0, trialList.Count);
            trialList[i][1] = trialList[randomIndex1][1]; // ���݂̗v�f�ɏ㏑��
            trialList[i][2] = trialList[randomIndex2][2];
            trialList[randomIndex1][1] = temp1;
            trialList[randomIndex1][2] = temp2;// ����ւ����ɗa���Ă������v�f��^����
        }
    }
}

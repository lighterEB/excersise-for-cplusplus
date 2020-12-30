//
// Created by tosixJuly on 2020/12/29.
//
#include <iostream>
#include <ctime>
using namespace std;

//����һ
//����ѧ���ṹ��
struct Student
{
    //����
    string sName;
    //����
    int sAge;
    //����
    int sScore;
};
//������ʦ�ṹ��
struct Teacher
{
    //��ʦ����
    string tName;
    //��ʦ���
    int tId;
    //��ʦ����
    int tAge;
    //��ʦ������ѧ��
    Student tStu[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    //����ʦ��ʼ��ֵ
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        //ͨ��ѭ����ÿ����ʦ������ѧ��
        for (int j = 0; j < 5; j++)
        {
            tArray[i].tStu[j].sName = "Student_";
            tArray[i].tStu[j].sName += nameSeed[j];
            int rank = rand() % 61 + 40;
            tArray[i].tStu[j].sScore = rank;
        }
    }
}
//��ӡ��ʦ��ѧ����Ϣ����
void printInfo(struct Teacher* tArray, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ������" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tѧ�������� " << tArray[i].tStu[j].sName <<
                 " ���Է�����" << tArray[i].tStu[j].sScore << endl;
        }
    }
}

int main()
{
    //���������
    srand((unsigned int)time(NULL));
    //1������3����ʦ������
    struct Teacher tArray[3];
    //2��ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    //3����ӡ������ʦѧ����Ϣ
    printInfo(tArray, len);
    return 0;
}
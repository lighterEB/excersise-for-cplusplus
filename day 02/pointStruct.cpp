//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

//�ṹ��ָ��
//����ṹ��
struct Student
{
    //����
    string name;
    //����
    int age;
    //����
    int score;
};

int main()
{
    //1������ѧ���Ľṹ�����
    struct Student student = { "����", 18, 100 };

    //2��ͨ��ָ��ָ��ṹ�����
    struct Student* pStruct = &student;

    //3��ͨ��ָ����ʽṹ������е�����
    cout << "������" << pStruct->name
         << " ���䣺" << pStruct->age
         << " ������" << pStruct->score << endl;

    return 0;
}
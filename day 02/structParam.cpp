//
// Created by tosixJuly on 2020/12/29.
//
#include <iostream>
using namespace std;

//�����޸��������������õ�ַ���ݣ���֮��ֵ���ݡ�
//����ѧ���ṹ��
struct student
{
    //����
    string name;
    //����
    int age;
    //����
    int score;
};
//1.ֵ����
void printStudent1(struct student stu)
{
    cout << "�Ӻ���1�д�ӡ ������ " << stu.name
         << " ���䣺" << stu.age
         << " ������" << stu.score << endl;
}
//2.��ַ����
void printStudent2(struct student* pStu)
{
    pStu->name = "���ְ�";
    cout << "�Ӻ���2�д�ӡ ������ " << pStu->name
         << " ���䣺" << pStu->age
         << " ������" << pStu->score << endl;
}
int main()
{
    //�ṹ������������
    //��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

    //�����ṹ�����
    struct student stu;
    stu.name = "����";
    stu.age = 26;
    stu.score = 100;
    printStudent1(stu);
    printStudent2(&stu);

    cout << "main�����д�ӡ ������ " << stu.name
         << " ���䣺" << stu.age
         << " ������" << stu.score << endl;


    return 0;
}

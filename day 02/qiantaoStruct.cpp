//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

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
//������ʦ�ṹ��
struct teacher
{
    //���
    int id;
    //����
    string name;
    //����
    int age;
    //������ѧ��
    struct student stu;
};

int main()
{
    //�ṹ��Ƕ��
    //������ʦ
    teacher teacher;
    teacher.id = 10086;
    teacher.name = "��ά";
    teacher.age = 27;
    teacher.stu.name = "С��";
    teacher.stu.age = 16;
    teacher.stu.score = 98;
    cout << "��ʦid��" << teacher.id << " ��ʦ������" << teacher.name << " ��ʦ���䣺" << teacher.age
         << " ��ʦ����ѧ����" << teacher.stu.name << " ��ʦ����ѧ�������䣺" << teacher.stu.age <<
         " ��ʦ����ѧ���ķ�����" << teacher.stu.score << endl;
    return 0;
}
//
// Created by tosixJuly on 2020/12/29.
//
#include <iostream>
using namespace std;

//constʹ�ó���
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

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//const��ֹ���ݱ��޸�
void printStudents(const student* stu)
{
    cout << "������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
}
int main()
{
    //�����ṹ�����
    struct student stu = { "����", 15, 70 };

    //ͨ��������ӡ�ṹ���������Ϣ
    printStudents(&stu);

    return 0;
}
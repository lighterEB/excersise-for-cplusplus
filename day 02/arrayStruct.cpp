//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

//�ṹ������
//1������ṹ��
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
    //2�������ṹ������
    struct Student stuArray[3] =
            {
                    {"����", 18, 100},
                    {"����", 28, 80},
                    {"����", 8, 90},
            };

    //3�����ṹ�������е�Ԫ�ظ�ֵ
    stuArray[2].name = "����";
    stuArray[2].age = 80;
    stuArray[2].score = 60;

    //4�������ṹ������
    for (auto & i : stuArray)
    {
        cout << "������" << i.name
             << " ���䣺" << i.age
             << " ������" << i.score << endl;
    }
    return 0;
}
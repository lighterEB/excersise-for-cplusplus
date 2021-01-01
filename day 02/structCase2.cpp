//
// Created by tosixJuly on 2020/12/30.
//
#include <iostream>
using namespace std;

//������
//�ṹ������ð������
struct Hero
{
    //Ӣ������
    string name;
    //Ӣ������
    int age;
    //Ӣ���Ա�
    string sex;
};

//ð��������
void bubbleSort(struct Hero* hero, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (hero[j].age > hero[j + 1].age)
            {
                Hero temp = hero[j + 1];
                hero[j + 1] = hero[j];
                hero[j] = temp;
            }
        }
    }
}
//��ӡ��Ϣ����
void printInfo(struct Hero* hero, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Ӣ�����ƣ� " << hero[i].name
             << " Ӣ�����䣺" << hero[i].age
             << " Ӣ���Ա�" << hero[i].sex << endl;
    }
}

int main()
{
    //1������Ӣ�۽ṹ������
    Hero hero[5] = {
            {"����", 33, "��" },
            {"�����", 26, "��"},
            {"����С", 8, "��"},
            {"��߸", 13, "��"},
            {"����", 18, "Ů"},
    };
    int len = sizeof(hero) / sizeof(hero[0]);
    //2��ð������
    bubbleSort(hero, len);
    //3����������Ľ��
    printInfo(hero, len);
    return 0;
}

//
// Created by tosixJuly on 2020/12/25.
// ��ά����-�ɼ�ͳ��

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //������ά���飬3��3��
    int scores[3][3] = {
            {100, 80, 100},
            {95, 60, 87},
            {100, 100, 99}
    };

    string name[3] = {"����", "����", "������"};
    int k = 0;
    for (auto &score : scores)
    {
        int sum = 0;
        for (int j : score)
        {
            sum += j;
        }
        cout << name[k] << "���ܷ֣� " << sum << endl;
        k++;
    }
}
//
// Created by tosixJuly on 2020/12/25.
// һά����-��ֻС��������

#include <iostream>
using namespace std;

int main()
{
    //1��������ֻС�����ص�����
    int arr[5] = { 300,350,200,400,250 };
    //2���������������ֵ
    int max = 0; //���϶�һ�����ֵ
    for (int i : arr)
    {
        if(i>max)
        {
            max = i;
        }
    }
    //3����ӡ���ֵ
    cout << "С���������أ�"<< max << endl;

    return 0;
}

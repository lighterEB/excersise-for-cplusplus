//
// Created by tosixJuly on 2020/12/25.
// һά����-Ԫ������

#include <iostream>
using namespace std;

int main()
{
    //ʵ������Ԫ������
    //1����������
    int arr[5] = { 1,2,3,4,5 };
    cout << "����ǰ��" << endl;
    for (int i : arr)
    {
        cout << i << endl;
    }
    //2��ʵ������
    //2.1��¼��ʼ�±�λ��
    //2.2��¼�����±�λ��
    //2.3��ʼ�±�������±��Ԫ�ػ���
    //2.4��ʼλ��++������λ��--
    //2.5ѭ��ִ��2.1������ֱ����ʼλ��>=����λ��
    int start = 0;
    int end = 4;
    for( int i = 0; i<5; i++)
    {
        if( start < end )
        {
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            start++;
            end--;
        }
    }
    cout << "���ú�" << endl;
    for (int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}
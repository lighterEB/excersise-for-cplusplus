//
// Created by tosixJuly on 2021/1/1.
//

#include <iostream>
using namespace std;

/*
	ͨѶ¼����ϵͳ

*/

// �˵���ʾ
void showMenue()
{
    cout << "*************************" << endl;
    cout << "****** 1�������ϵ�� ******" << endl;
    cout << "****** 2����ʾ��ϵ�� ******" << endl;
    cout << "****** 3��ɾ����ϵ�� ******" << endl;
    cout << "****** 4��������ϵ�� ******" << endl;
    cout << "****** 5�������ϵ�� ******" << endl;
    cout << "****** 0���˳�ͨѶ¼ ******" << endl;
    cout << "*************************" << endl;
}
int main()
{
    int select = 0; // ����ѡ�����
    // �˵�����
    while (true)
    {
        showMenue();
        cin >> select;
        switch (select) {
            case 1:     // �����ϵ��
                break;
            case 2:     // ��ʾ��ϵ��
                break;
            case 3:     // ɾ����ϵ��
                break;
            case 4:     // ������ϵ��
                break;
            case 5:     // �޸���ϵ��
                break;
            case 6:     // �����ϵ��
                break;
            case 0:     // �˳�ͨѶ¼
                cout << "��ӭ�´�ʹ�ã�"<<endl;
                return 0;
        }
    }
    return 0;
}
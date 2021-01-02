//
// Created by tosixJuly on 2021/1/1.
//
/*
    ͨѶ¼����ϵͳ
*/

#include <iostream>
#define MAX 1000
using namespace std;


// �˵���ʾ
void showMenue()
{
    system("cls");
    cout << "***************************" << endl;
    cout << "****** 1�������ϵ�� ******" << endl;
    cout << "****** 2����ʾ��ϵ�� ******" << endl;
    cout << "****** 3��ɾ����ϵ�� ******" << endl;
    cout << "****** 4��������ϵ�� ******" << endl;
    cout << "****** 5���޸���ϵ�� ******" << endl;
    cout << "****** 6�������ϵ�� ******" << endl;
    cout << "****** 0���˳�ͨѶ¼ ******" << endl;
    cout << "***************************" << endl;
}

// ��ϵ�˽ṹ��
struct Person
{
    string name;    // ��ϵ������
    int sex{};     // �Ա�
    int age{};    //����
    string phoneNum{};   // �绰
    string address; // ��ַ
};
// ͨѶ¼�ṹ��
struct ContactManage
{
    struct Person personArray[MAX];
    int mSize{};  // ͨѶ¼��������
};

// �����ϵ�˺���
void addPerson(struct ContactManage* cm)
{
    // �ж�ͨѶ¼�Ƿ��������˾��˳�
    if (cm->mSize == MAX)
    {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
        return;
    }
    else
    {
        // ��Ӿ�����ϵ��

        // ����
        string name;
        system("cls");
        cout << "������������" << endl;
        cin >> name;
        cm->personArray[cm->mSize].name = name;
        // �Ա�
        int sex = 0;
        while (true)
        {
            cout << "�������Ա�" << endl;
            cout << "1.------ ��" << endl;
            cout << "2.------ Ů" << endl;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                break;
            }
            else
            {
                cout << "�����������������룡" << endl;
                continue;
            }
        }
        cm->personArray[cm->mSize].sex = sex;
        // ����
        int age;
        cout << "���������䣺" << endl;
        cin >> age;
        cm->personArray[cm->mSize].age = age;
        // �绰
        string phone;
        cout << "������绰��" << endl;
        cin >> phone;
        cm->personArray[cm->mSize].phoneNum = phone;
        // סַ
        string address;
        cout << "������סַ��" << endl;
        cin >> address;
        cm->personArray[cm->mSize].address = address;
        // ����ͨѶ¼
        cm->mSize++;
        cout << "��ӳɹ���" << endl;
        system("pause");
    }
}

// ��ʾ��ϵ�˺���
void showPerson(ContactManage* cm)
{
    // �ж�ͨѶ¼��¼�Ƿ�Ϊ�գ����Ϊ����ʾ��¼Ϊ��
    // �����Ϊ0����ʾ��¼�е���ϵ��
    system("cls");
    if (cm->mSize == 0)
    {
        cout << "ͨѶ¼Ϊ��" << endl;
        system("pause");
    }
    else
    {
        cout << "��ϵ����Ϣ��" << endl;
        for (int i = 0; i < cm->mSize; i++)
        {
            cout << "������" << cm->personArray[i].name << "\t"
                 << "���䣺" << cm->personArray[i].age << "\t"
                 << "�Ա�" << (cm->personArray[i].sex == 1 ? "��" : "Ů") << "\t"
                 << "�绰��" << cm->personArray[i].phoneNum << "\t"
                 << "סַ��" << cm->personArray[i].address << "\t" << endl;
        }
        system("pause");
    }
}

// �ж���ϵ���Ƿ����
int isExist(ContactManage* cm, const string& name)
{
    for (int i = 0; i < cm->mSize; i++)
    {
        if (cm->personArray[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

// ɾ����ϵ�˺���
void deletePerson(ContactManage* cm)
{
    system("cls");
    cout << "������Ҫɾ������ϵ��������" << endl;
    string name;
    cin >> name;
    int ret = isExist(cm, name);
    if (ret != -1)
    {
        for (int i = ret; i < cm->mSize; i++)
        {
            cm->personArray[i] = cm->personArray[i + 1];
        }
        cm->mSize--;
        cout << "ɾ���ɹ���" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}

// ������ϵ��
void findPerson(ContactManage* cm)
{
    system("cls");
    int ret;
    string name;
    cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
    cin >> name;
    ret = isExist(cm,name);
    if (ret != -1)
    {
        cout << "������" << cm->personArray[ret].name << "\t"
             << "���䣺" << cm->personArray[ret].age << "\t"
             << "�Ա�" << (cm->personArray[ret].sex == 1 ? "��" : "Ů") << "\t"
             << "�绰��" << cm->personArray[ret].phoneNum << "\t"
             << "סַ��" << cm->personArray[ret].address << "\t" << endl;
    }
    else
    {
        cout << "���޴��ˣ�" << endl;
    }
    system("pause");
}

// �޸���ϵ��
void modifyPerson(ContactManage* cm)
{
    system("cls");
    string name;
    int ret;
    cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
    cin >> name;
    ret = isExist(cm, name);
    if (ret != -1)
    {
        cout << "������Ҫ�޸ĵ���Ϣ��" << endl;
        // ����
        string name;
        system("cls");
        cout << "������������" << endl;
        cin >> name;
        cm->personArray[ret].name = name;
        // �Ա�
        int sex = 0;
        while (true)
        {
            cout << "�������Ա�" << endl;
            cout << "1.------ ��" << endl;
            cout << "2.------ Ů" << endl;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                break;
            }
            else
            {
                cout << "�����������������룡" << endl;
                continue;
            }
        }
        cm->personArray[ret].sex = sex;
        // ����
        int age;
        cout << "���������䣺" << endl;
        cin >> age;
        cm->personArray[ret].age = age;
        // �绰
        string phone;
        cout << "������绰��" << endl;
        cin >> phone;
        cm->personArray[ret].phoneNum = phone;
        // סַ
        string address;
        cout << "������סַ��" << endl;
        cin >> address;
        cm->personArray[ret].address = address;
        // ����ͨѶ¼
        cout << "�޸ĳɹ���" << endl;


    }
    else
    {
        cout << "���޴��ˣ�" << endl;
    }
    system("pause");
}

// �����ϵ��
void clearPerson(ContactManage* cm)
{
    cm->mSize = 0;
    system("cls");
    cout << "ͨѶ¼����գ�" << endl;
    system("pause");
}

int main()
{
    ContactManage cm;
    cm.mSize = 0;
    int select = 0; // ����ѡ�����
    // �˵�����
    while (true)
    {
        showMenue();
        cin >> select;
        switch (select) {
            case 1:     // �����ϵ��
                addPerson(&cm);     //���õ�ַ�����޸�ʵ��
                break;
            case 2:     // ��ʾ��ϵ��
                showPerson(&cm);
                break;
            case 3:     // ɾ����ϵ��
                deletePerson(&cm);
                break;
            case 4:     // ������ϵ��
                findPerson(&cm);
                break;
            case 5:     // �޸���ϵ��
                modifyPerson(&cm);
                break;
            case 6:     // �����ϵ��
                clearPerson(&cm);
                break;
            case 0:     // �˳�ͨѶ¼
                cout << "��ӭ�´�ʹ�ã�" << endl;
                return 0;
        }
    }
}
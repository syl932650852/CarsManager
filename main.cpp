#define _CRT_SECURE_NO_WARNINGS
#include "user.h"
#include "include/admin.h"
#include <iostream>
using namespace std;

int main() {
    User user;
    Admin admin;

    char ch;
    while(1)
    {
        system("cls");
        cout << "1.��ͨ�û���¼" << endl;
        cout << "2.����Ա��¼" << endl;
        cout << "3.�˳�ϵͳ" << endl;
        cout << "������Ҫִ�еĲ���" << endl;
        cin >> ch;
        switch (ch)
        {
            case '1':
                break;
            case '2':
                break;
            case '3':
                exit;
            default:
            cout << "��������ȷ����" << endl;
        }
    }
    return 0;
}

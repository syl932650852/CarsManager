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
        cout << "1.普通用户登录" << endl;
        cout << "2.管理员登录" << endl;
        cout << "3.退出系统" << endl;
        cout << "请输入要执行的操作" << endl;
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
            cout << "请输入正确操作" << endl;
        }
    }
    return 0;
}

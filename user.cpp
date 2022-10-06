#include <iostream>
#include <windows.h>
#include "include/user.h"
#include "car.h"

using namespace std;

void User::checkCar()
{
    Car car;

    while (1)
    {
        system("cls");
        cout << "1.显示车辆状况" << endl;
        cout << "2.查询车辆信息" << endl;
        cout << "3.统计车辆" << endl;
        cout << "4.退出普通用户" << endl;
        int num;
        cout << "请输入要执行的操作";
        cin >> num;
        switch(num) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                return;
            default:
                cout << "请输入正确的操作" << endl;
        }
        system("psuse");
    }
}
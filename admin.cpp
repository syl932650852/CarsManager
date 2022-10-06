#include "car.h"
#include "include/admin.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
void Admin::Manager() {
    Car car;

    while (1){
        system("cls");
        cout << "1.增加车辆" << endl;
        cout << "2.显示所有车辆信息" << endl;
        cout << "3.查询" << endl;
        cout << "4.修改" << endl;
        cout << "5.删除" << endl;
        cout << "6.统计" << endl;
        cout << "7.退出管理用户" << endl;
        cout << "请输入要执行的操作" << endl;
        int num;
        cin >> num;
        switch(i)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                return;
            default: cout << "输出错误" << endl;
        }
        system("pause");
    }
}

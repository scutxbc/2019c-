// 商品管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include "system.h"
#include<iostream>

using namespace std;


int main()
{
	while (1)
	{
		system("cls");
		short choice;
		f8();
		cout << "请选择并输入功能对应号码" << endl;
		do
		{
			cin >> choice;
			switch (choice)
			{
			case 1:f1(); break;
			case 2:f2(); break;
			case 3:f3(); break;
			case 4:f4(); break;
			case 5:f5(); break;
			case 6:f6(); break;
			case 7:
				cout << "已进入7.删除商品函数" << endl;
				system("cls");
				f9();
				f7(); break;
			case 0:delete[] goods; delete[] p; exit(0);
			default:cout << "输入有误，请重新输入" << endl;
			}
		} while (choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7);
		system("pause");
	}
}



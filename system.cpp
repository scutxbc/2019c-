#include "system.h"
#include <iostream>
#include<iomanip>
#include<cstdio>
#include<Windows.h>
#include<string>
using namespace std;
void f1()
{
	cout << "已进入1.录入商品函数" << endl;
	char m;
	cout << "请输入商品的信息：" << endl;
	n ++	;
	for (int i = 0; i < n; i++)
	{
		cout << "商品名称："; cin >> goods[i].name; //录入名称
		cout << "商品序号："; cin >> goods[i].number; //录入序号
		cout << "商品编码："; cin >> goods[i].ID; //录入编码
		cout << "商品品牌：";  cin >> goods[i].kind; //录入种类
		cout << "商品进货年份："; cin >> goods[i].Purchasetime.year;//录入进货时间（年）
		cout << "商品进货月份："; cin >> goods[i].Purchasetime.month; //录入进货时间（月）
		cout << "商品进货日份："; cin >> goods[i].Purchasetime.day;//录入进货时间（日）
		cout << "商品进货地址："; cin >> goods[i].PurchaseAddress; //录入进货地址
		cout << "商品进货数目："; cin >> goods[i].PurchaseNumber; //录入进货数目
		cout << "商品进价："; cin >> goods[i].PurchasePrice;//录入进价
		cout << "商品售价："; cin >> goods[i].SellPrice; //录入售价（单件）
		cout << "商品库余量："; cin >> goods[i].stock;//录入库余量
		cout << "商品已卖数目："; cin >> goods[i].Sellnumber; //录入已卖数目		
	}
	cout << "还有未录入的商品，若是，请输入1后继续录入，否则输入0" << endl;
	cin >> m;
	while (m == '1')
	{
		n++;
		cout << "商品名称："; cin >> goods[n - 1].name; //录入名称
		cout << "商品序号："; cin >> goods[n - 1].number; //录入序号
		cout << "商品编码："; cin >> goods[n - 1].ID; //录入编码
		cout << "商品品牌："; cin >> goods[n - 1].kind; //录入种类
		cout << "商品进货年份："; cin >> goods[n - 1].Purchasetime.year;//录入进货时间（年）
		cout << "商品进货月份："; cin >> goods[n - 1].Purchasetime.month;//录入进货时间（月）
		cout << "商品进货日份："; cin >> goods[n - 1].Purchasetime.day; //录入进货时间（日）
		cout << "商品进货地址："; cin >> goods[n - 1].PurchaseAddress;//录入进货地址
		cout << "商品进货数目："; cin >> goods[n - 1].PurchaseNumber; //录入进货数目
		cout << "商品进价："; cin >> goods[n - 1].PurchasePrice; //录入进价
		cout << "商品售价："; cin >> goods[n - 1].SellPrice; //录入售价（单件）
		cout << "商品库余量："; cin >> goods[n - 1].stock; //录入库余量
		cout << "商品已卖数目："; cin >> goods[n - 1].Sellnumber;//录入已卖数目

		cout << "还有未录入的商品，若是，请输入1后继续录入，否则输入0" << endl;
		cin >> m;
		if (m == '0') break;
	}
	char w = '1';
	do
	{
		system("cls");
		cout << "录入后按序号排序后的商品信息表为：" << endl;
		f9();
		char w;
		cout << "请确认上面表格信息是否有误，若有误，请输入1并修改，若无误 请输入0" << endl;
		cin >> w;
		if (w == '1')
			f4();
		if (w == '0') break;
	} while (w == '1');
}
void f2()
{
	int i;
	int g;
	cout << "已进入2.查找商品函数" << endl;
	cout << "请输入要查找的商品序号" << endl;
	cin >> g;
	for (i = 0; i < n; i++)
	{
		if (g == goods[i].number)
		{
			cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
			cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
			cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
				<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;

			gotoxy(0, 23);
			cout << '\0' << "|" << "  " << goods[i].number << "  ";
			gotoxy(10, 23);
			cout << "|" << " " << goods[i].name;
			gotoxy(19, 23);
			cout << "|" << goods[i].ID;
			gotoxy(26, 23);
			cout << "|" << goods[i].kind;
			gotoxy(33, 23);
			cout << "|" << goods[i].Purchasetime.year << "," << goods[i].Purchasetime.month << "," << goods[i].Purchasetime.day;
			gotoxy(44, 23);
			cout << "|" << " " << goods[i].PurchaseAddress;
			gotoxy(53, 23);
			cout << "|" << "     " << goods[i].PurchaseNumber << "     ";
			gotoxy(67, 23);
			cout << "|" << "    " << goods[i].PurchasePrice << "   ";
			gotoxy(80, 23);
			cout << "|" << "   " << goods[i].SellPrice << "  ";
			gotoxy(91, 23);
			cout << "|" << "    " << goods[i].stock << "    ";
			gotoxy(103, 23);
			cout << "|" << "     " << goods[i].Sellnumber << "     ";
			gotoxy(117, 23);
			cout << "|" << endl;
			cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
				<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl; break;
		}
		else if (i != n - 1)
			continue;
		else
		{
			cout << "该序号没有对应的商品" << endl;
		}
	}
}
void f3()
{
	int a, b, c = 0, i;
	system("cls");
	cout << "请根据下表进行删除商品操作：" << endl;
	f9();
	do
	{
		cout << "请选择你要删除的商品序号：";
		cin >> a;
		for (i = 0; i < n; i++)
		{
			if (a == goods[i].number)
				break;
			else if (i != n - 1)
				continue;
			else
			{
				cout << "不存在该商品，请重新输入：";
				cin >> a;
				i = 0;
				continue;
			}
		}
		do
		{
			cout << "确定删除序号为：" << goods[i].number << "的商品吗？(输入1确定，输入0取消)" << endl;
			cin >> b;
		} while (b != 0 && b != 1);
		if (b == 1)
		{
			while (i < n - 1)
			{
				goods[i] = goods[i + 1];
				i++;
			}
			n = n - 1;
			cout << "删除成功!" << endl;
		}
		else
		{
			cout << "是否继续删除？(输入1继续，输入0结束)" << endl;
			cin >> c;
			while (c != 0 && c != 1)
			{
				cout << "输入有误，请重新输入：" << endl;
				cin >> c;
			}
		}
	} while (c == 1);
	system("cls");
	cout << "删除后按序号排序的商品信息表为：" << endl;
	f9();
	f7();
}
void f4()
{
	int k, i, m;
	cout << "已进入4.修改商品函数" << endl;
	cout << "请输入需要修改的商品对应的序号" << endl;
	cin >> k;
	for (i = 0; i < n; i++)
	{
		if (k == goods[i].number)
		{
			cout << "已找到商品的信息" << endl;
			cout << "商品名称：" << goods[i].name << endl;
			cout << "商品序号：" << goods[i].number << endl;
			cout << "商品编码：" << goods[i].ID << endl;
			cout << "商品品牌：" << goods[i].kind << endl;
			cout << "商品进货年份：" << goods[i].Purchasetime.year << endl;
			cout << "商品进货月份：" << goods[i].Purchasetime.month << endl;
			cout << "商品进货日份：" << goods[i].Purchasetime.day << endl;
			cout << "商品进货地址：" << goods[i].PurchaseAddress << endl;
			cout << "商品进货数目：" << goods[i].PurchaseNumber << endl;
			cout << "商品进价：" << goods[i].PurchasePrice << endl;
			cout << "商品售价：" << goods[i].SellPrice << endl;
			cout << "商品库余量：" << goods[i].stock << endl;
			cout << "商品已卖数目：" << goods[i].Sellnumber << endl;
			cout << "请重新输入该商品的信息" << endl;
			cout << "商品名称："; cin >> goods[i].name; //重新录入名称
			cout << "商品序号："; cin >> goods[i].number; //重新录入序号
			cout << "商品编码："; cin >> goods[i].ID; //重新录入编码
			cout << "商品品牌："; cin >> goods[i].kind; //重新录入种类
			cout << "商品进货年份："; cin >> goods[i].Purchasetime.year;//重新录入进货时间（年）
			cout << "商品进货月份："; cin >> goods[i].Purchasetime.month;//重新录入进货时间（月）
			cout << "商品进货日份："; cin >> goods[i].Purchasetime.day; //重新录入进货时间（日）
			cout << "商品进货地址："; cin >> goods[i].PurchaseAddress;//重新录入进货地址
			cout << "商品进货数目："; cin >> goods[i].PurchaseNumber; //重新录入进货数目
			cout << "商品进价："; cin >> goods[i].PurchasePrice; //重新录入进价
			cout << "商品售价："; cin >> goods[i].SellPrice; //重新录入售价（单件）
			cout << "商品库余量："; cin >> goods[i].stock; //重新录入库余量
			cout << "商品已卖数目："; cin >> goods[i].Sellnumber;//重新录入已卖数目
		}
		else if (i != n - 1)
			continue;
		else
		{
			cout << "该序号没有对应的商品" << endl;
		}
	}
	cout << "继续修改请按1,返回主菜单请按2" << endl;
	cin >> m;
	if (m == 1)
		f4();
	else
	{
		system("cls");
		cout << "修改后按序号排序的商品信息表为：" << endl;
		f9();
		f7();
	}
}
void f5()
{
	cout << "已进入5.插入商品函数" << endl;
	char a1 = '1';
	cout << "请输入插入的商品信息：" << endl;
	while (a1 == '1')
	{
		n++;
		cout << "商品名称："; cin >> goods[n - 1].name; //录入名称
		cout << "商品序号："; cin >> goods[n - 1].number; //录入序号
		cout << "商品编码："; cin >> goods[n - 1].ID; //录入编码
		cout << "商品品牌："; cin >> goods[n - 1].kind; //录入种类
		cout << "商品进货年份："; cin >> goods[n - 1].Purchasetime.year;//录入进货时间（年）
		cout << "商品进货月份："; cin >> goods[n - 1].Purchasetime.month;//录入进货时间（月）
		cout << "商品进货日份："; cin >> goods[n - 1].Purchasetime.day; //录入进货时间（日）
		cout << "商品进货地址："; cin >> goods[n - 1].PurchaseAddress;//录入进货地址
		cout << "商品进货数目："; cin >> goods[n - 1].PurchaseNumber; //录入进货数目
		cout << "商品进价："; cin >> goods[n - 1].PurchasePrice; //录入进价
		cout << "商品售价："; cin >> goods[n - 1].SellPrice; //录入售价（单件）
		cout << "商品库余量："; cin >> goods[n - 1].stock; //录入库余量
		cout << "商品已卖数目："; cin >> goods[n - 1].Sellnumber;//录入已卖数目

		cout << "还有未插入的商品，若是，请输入1后继续录入，否则输入0" << endl;
		cin >> a1;
		if (a1 == '0') break;
	}//添加f5()
	system("cls");
	cout << "插入商品后按序号排序的商品信息表为：" << endl;
	f9();
	f7();
}
void f6()
{
	cout << "已进入6.商品排序函数" << endl;
	int i;//选择f6函数的子函数
	cout << "请输入排序方式" << endl;
	cout << "输入1按序号排，输入2按编码排，输入3按进货日期排，输入4按进货数量排" << endl;
	cout << "输入5按进价排，输入6按售价排，输入7按已卖数目排，输入8按剩余货量排" << endl;
	do
	{
		cin >> i;
		switch (i)
		{
		case 1:f6_1(); break;
		case 2:f6_2(); break;
		case 3:f6_3(); break;
		case 4:f6_4(); break;
		case 5:f6_5(); break;
		case 6:f6_6(); break;
		case 7:f6_7(); break;
		case 8:f6_8(); break;
		default:cout << "输入错误，重新输入" << endl;
		}
	} while (i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6 && i != 7 && i != 8);
	system("pause");
	f7();
}
void f6_1()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].number > goods[p[j + 1]].number)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_2()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].ID > goods[p[j + 1]].ID)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_3()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].Purchasetime.year > goods[p[j + 1]].Purchasetime.year || (goods[p[j]].Purchasetime.year == goods[p[j + 1]].Purchasetime.year&&goods[p[j]].Purchasetime.month > goods[p[j + 1]].Purchasetime.month) || (goods[p[j]].Purchasetime.year == goods[p[j + 1]].Purchasetime.year&&goods[p[j]].Purchasetime.month == goods[p[j + 1]].Purchasetime.month&&goods[p[j]].Purchasetime.day > goods[p[j + 1]].Purchasetime.day))
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_4()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].PurchaseNumber > goods[p[j + 1]].PurchaseNumber)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_5()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].PurchasePrice > goods[p[j + 1]].PurchasePrice)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_6()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].SellPrice > goods[p[j + 1]].SellPrice)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_7()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].Sellnumber > goods[p[j + 1]].Sellnumber)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f6_8()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].stock > goods[p[j + 1]].stock)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 25);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 25);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 25);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 25);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 25);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 25);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 25);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 25);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 25);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}
void f7()
{
	int a = 0, b = 0, i;
	double long  c = 0, d = 0, e = 0;
	for (i = 0; i < n; i++)
	{
		a += goods[i].Sellnumber;
		b += goods[i].stock;
		c += (goods[i].PurchaseNumber)*(goods[i].PurchasePrice);
		d += (goods[i].Sellnumber)*(goods[i].SellPrice);
		e = d - c;
	}
	cout << "商品总数为：" << n << "件" << endl;
	cout << "已卖出商品：" << a << "件" << endl;
	cout << "剩余商品为：" << b << "件" << endl;
	cout << "总成本为：" << c << "元" << endl;
	cout << "总收入为：" << d << "元" << endl;
	cout << "总利润为：" << e << "元" << endl;
}
void f8()
{
	cout << '\0' << " _________________________________" << endl;
	cout << '\0' << "|                                 |" << endl;
	cout << '\0' << "|          商品管理系统           |" << endl;
	cout << '\0' << "|_________________________________|" << endl;
	cout << '\0' << "|                                 |" << endl;
	cout << '\0' << "|           1.录入商品            |" << endl;
	cout << '\0' << "|           2.查找商品            |" << endl;
	cout << '\0' << "|           3.删除商品            |" << endl;
	cout << '\0' << "|           4.修改商品            |" << endl;
	cout << '\0' << "|           5.插入商品            |" << endl;
	cout << '\0' << "|           6.商品排序            |" << endl;
	cout << '\0' << "|           7.统计商品            |" << endl;
	cout << '\0' << "|           0.退出                |" << endl;
	cout << '\0' << "|_________________________________|" << endl;
	cout << endl;
}
void gotoxy(int x, int y)
{
	COORD p;
	HANDLE hscr;
	p.X = x;
	p.Y = y;
	hscr = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hscr, p);
}
void f9()
{
	int i, j, temp;//索引数组赋值计数器或数组遍历计数器或输出计数器,数组遍历计数器,索引数组中转变量
	for (i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			if (goods[p[j]].number > goods[p[j + 1]].number)
			{
				temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
			}
		}
	}
	cout << '\0' << "_____________________________________________________________________________________________________________________" << endl;
	cout << '\0' << "|" << "商品序号" << "|" << "  名称  " << "|" << " 编码 " << "|" << " 品牌 " << "|" << " 进货时间 " << "|" << "进货地址" << "|" << "进货数目 (件)" << "|" << "进价 (元/件)" << "|" << " 售价 (元)" << "|" << "库余量 (件)" << "|" << "已卖数目 (件)" << "|" << endl;
	cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
		<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	for (i = 0; i < n; i++)
	{
		gotoxy(0, 2 * i + 4);
		cout << '\0' << "|" << "  " << goods[p[i]].number << "  ";
		gotoxy(10, 2 * i + 4);
		cout << "|" << " " << goods[p[i]].name;
		gotoxy(19, 2 * i + 4);
		cout << "|" << goods[p[i]].ID;
		gotoxy(26, 2 * i + 4);
		cout << "|" << goods[p[i]].kind;
		gotoxy(33, 2 * i + 4);
		cout << "|" << goods[p[i]].Purchasetime.year << "," << goods[p[i]].Purchasetime.month << "," << goods[p[i]].Purchasetime.day;
		gotoxy(44, 2 * i + 4);
		cout << "|" << " " << goods[p[i]].PurchaseAddress;
		gotoxy(53, 2 * i + 4);
		cout << "|" << "     " << goods[p[i]].PurchaseNumber << "     ";
		gotoxy(67, 2 * i + 4);
		cout << "|" << "    " << goods[p[i]].PurchasePrice << "   ";
		gotoxy(80, 2 * i + 4);
		cout << "|" << "   " << goods[p[i]].SellPrice << "  ";
		gotoxy(91, 2 * i + 4);
		cout << "|" << "    " << goods[p[i]].stock << "    ";
		gotoxy(103, 2 * i + 4);
		cout << "|" << "     " << goods[p[i]].Sellnumber << "     ";
		gotoxy(117, 2 * i + 4);
		cout << "|" << endl;
		cout << '\0' << "|" << "________" << "|" << "________" << "|" << "______" << "|" << "______" << "|" << "__________" << "|" << "________" << "|" << "_____________"
			<< "|" << "____________" << "|" << "__________" << "|" << "___________" << "|" << "_____________" << "|" << endl;
	}
}

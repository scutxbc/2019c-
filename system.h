#ifndef SYSTEM_H
#define SYSTEM_H
static int n = 0;
message *goods = new message[n];
int *p = new int[n];//索引数组
struct Date
{
	int year;
	int month;
	int day;
};
struct message
{
	char name[10];//名称
	char kind[10];//种类
	int number;//序号
	int ID;//编码
	Date Purchasetime;//进货日期
	char PurchaseAddress[5];//进货地址
	int PurchaseNumber;//进货数目
	double long PurchasePrice;//进价
	double long SellPrice;//售价（单价）
	int Sellnumber;//已卖数目
	int stock;//剩余货量

};

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f6_1();//按序号排
void f6_2();//按编码排
void f6_3(); //按进货日期排
void f6_4();//按进货数目排
void f6_5();//按进价排
void f6_6();//按售价排
void f6_7(); //按已卖数目排
void f6_8();//按剩余货量排
void f7();
void f8();
void f9();
void gotoxy(int, int);



#endif

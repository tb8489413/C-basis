#include "swap.h"

//函数分文件编写4个步骤
//1.创建.h的头文件
//2.创建.cpp的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义

void swap33(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a =" << a << endl;
	cout << "b=" << b << endl;
}
int main33() {

	int a = 100;
	int b = 200;
	swap33(a, b);
	system("pause");
	return 0;
}
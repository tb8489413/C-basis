#include<iostream>
using namespace std;

//指针定义的语法：数据类型 * 变量名；

int main34() {
	//1.指针的定义
	int a = 10;//数据类型

	int* p;//定义指针

	//指针变量赋值
	p = &a;//指针指向变量a的地址
	cout << &a << endl;
	cout << p << endl;

	//2.指针的使用
	//通过*操作指针变量指向内存(解引用)
	*p = 100;
	cout << "*p=" << *p << endl;
	cout << a << endl;

	system("pause");
	return 0;
}
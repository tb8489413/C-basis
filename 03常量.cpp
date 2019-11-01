#include<iostream>
using namespace std;

//常量的定义方式
//1.#define 宏常量
//2.const修饰的变量

//1.#define 宏常量
#define Day 7
int main3() {

	
	cout << "一周多少天" << Day << endl;

	//2.const修饰的变量
	int const month = 12;
	cout << "一年多少个月" << month << endl;

	system("pause");
	return 0;
}
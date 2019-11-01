#include<iostream>
using namespace std;

//语法：表达式1 ？表达式2 ：表达式3
//1真，执行2，返回2结果
//1假，执行3，返回3结果

int main13() {

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c =" << c << endl; // 20

	//C++中三目运算符返回的是变量，可以继续赋值

	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");
	return 0;
}
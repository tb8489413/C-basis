#include<iostream>
using namespace std;

//值传递时，形参是修饰不了实参的
//定义无返回值的函数

void swap31(int num1, int num2)
{
	cout << "交换前" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

}
int main31() {

	int a = 10;
	int b = 20;

	swap31(a, b);

	cout << "main中的a = " << a << endl;
	cout << "main中的b = " << b << endl;

	system("pause");
	return 0;
}
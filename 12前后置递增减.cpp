#include<iostream>
using namespace std;

int main12() {

	//前置递增/减  先让变量+1或-1，再进行表达式运算
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl; // 11
	cout << "b2 = " << b1 << endl; // 110

	//后置递增/减  先进行表达式运算，再让变量+1或-1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << endl; // 11
	cout << "b2 = " << b2 << endl; // 100



	system("pause");
	return 0;
}
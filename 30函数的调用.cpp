#include<iostream>
using namespace std;


//函数的定义
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main30() {
	
	int a = 10;
	int b = 10;
	//调用add函数
	int sum = add(a, b);
	cout << "sum=" << sum << endl;


	system("pause");
	return 0;
}
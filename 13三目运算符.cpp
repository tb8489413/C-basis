#include<iostream>
using namespace std;

//�﷨�����ʽ1 �����ʽ2 �����ʽ3
//1�棬ִ��2������2���
//1�٣�ִ��3������3���

int main13() {

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c =" << c << endl; // 20

	//C++����Ŀ��������ص��Ǳ��������Լ�����ֵ

	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

//ֵ����ʱ���β������β���ʵ�ε�
//�����޷���ֵ�ĺ���

void swap31(int num1, int num2)
{
	cout << "����ǰ" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

}
int main31() {

	int a = 10;
	int b = 20;

	swap31(a, b);

	cout << "main�е�a = " << a << endl;
	cout << "main�е�b = " << b << endl;

	system("pause");
	return 0;
}
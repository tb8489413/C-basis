#include "swap.h"

//�������ļ���д4������
//1.����.h��ͷ�ļ�
//2.����.cpp��Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���

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
#include<iostream>
using namespace std;

//ָ�붨����﷨���������� * ��������

int main34() {
	//1.ָ��Ķ���
	int a = 10;//��������

	int* p;//����ָ��

	//ָ�������ֵ
	p = &a;//ָ��ָ�����a�ĵ�ַ
	cout << &a << endl;
	cout << p << endl;

	//2.ָ���ʹ��
	//ͨ��*����ָ�����ָ���ڴ�(������)
	*p = 100;
	cout << "*p=" << *p << endl;
	cout << a << endl;

	system("pause");
	return 0;
}
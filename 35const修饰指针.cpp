#include<iostream>
using namespace std;

int main35() {
	int a = 10;
	int b = 10;

	//const���ε���ָ�룬ָ����Ըģ�ָ��ָ���ֵ�����Ը���
	const int* p1 = &a;
	p1 = &b;//True
	//* p1 = 100;//False

	//const���ε��ǳ�����ָ�򲻿ɸģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	//p2 = &b;//False
	*p2 = 100;//True

	system("pause");
	return 0;
}
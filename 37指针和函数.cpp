#include<iostream>
using namespace std;

//ֵ����
void swap1(int a, int b)
{
	int temp = a;
		a = b;
		b = temp;
}

//��ַ����
void swap2(int* p1, int* p2)
{
	int temp = *p1;
		* p1 = *p2;
		*p2 = temp;

}
int main37() {

	int a = 10;
	int b = 20;
	swap1(a, b);//ֵ���ݲ���ı�ʵ��
	swap2(&a, &b);//��ַ���ݻ�ı�ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}

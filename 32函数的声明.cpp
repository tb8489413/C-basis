#include<iostream>
using namespace std;

//�������Զ�Σ�����ֻ��һ��
//����
int max(int a, int b);
int max(int a, int b);
//����
int max(int a, int b)
{
	return a > b ? a : b;

}

int main32() {

	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
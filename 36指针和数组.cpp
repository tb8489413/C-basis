#include<iostream>
using namespace std;

int main36() {

	int arr[3] = { 1,2,3 };
	cout << "��һ��Ԫ��: " << arr[0] << endl;

	int* p = arr;//arr����������׵�ַ
	cout << "��һ��Ԫ��: " << *p << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}
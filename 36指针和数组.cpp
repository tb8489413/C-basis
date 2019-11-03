#include<iostream>
using namespace std;

int main36() {

	int arr[3] = { 1,2,3 };
	cout << "第一个元素: " << arr[0] << endl;

	int* p = arr;//arr就是数组的首地址
	cout << "第一个元素: " << *p << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}
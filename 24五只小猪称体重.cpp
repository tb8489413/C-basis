#include<iostream>
using namespace std;

int main24() {
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i=0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "×î´óÊý" << max << endl;

	system("pause");
	return 0;
}
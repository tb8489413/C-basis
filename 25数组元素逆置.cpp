#include<iostream>
using namespace std;

int main25() {

	int arr[5] = { 1,3,2,5,4 };
	cout << "元素数组前的结果" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//实现逆置
	//1.记录起始下标位置
	//2.记录结束下标位置
	//3.起始下标和结束下标元素互换
	//4.起始位置++,结束位置--
	//5.循环执行，直到起始位置>=结束位置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end)
	{

		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;

	}
	//打印逆置后的数组
	cout << "数组元素逆置后" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	


	system("pause");
	return 0;
}
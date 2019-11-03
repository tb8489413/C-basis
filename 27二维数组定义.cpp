#include<iostream>
using namespace std;


//二维数组定义方式
//数据类型 数组名[行数][列数]={{数据1，数据2},{数据3，数据4}};

int main27() {

	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}

	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
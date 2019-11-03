#include<iostream>
using namespace std;

int main29() {

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};
	string names[3] = { "张三","李四","王五" };
	string subjects[3] = { "语文","数学","英语" };

	//cout << names[0] << subjects[0] << scores[0][0] << endl;
	//cout << names[0] << subjects[0+1] << scores[0][0+1] << endl;
	//cout << names[0] << subjects[0+2] << scores[0][0+2] << endl;

	for (int k = 0; k < 3; k++)
	{
		for (int m = 0; m < 3; m++)
		{
			cout << names[k] << subjects[m] << scores[k][m] << endl;
		}
			
	}
	for (int i = 0;i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		
		cout << names[i] << "同学总成绩" << sum << endl;
	}

	system("pause");
	return 0;
}
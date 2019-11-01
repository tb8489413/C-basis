#include<iostream>
using namespace std;

int main15() {

	//1.系统产生随机数
	int num = rand() % 100 + 1;//生成0+1~99+1随机数

	/*cout << num << endl;*/

	//2.玩家猜测
	int val = 0; //玩家输入的数据

	while (1)
	{
		cin >> val;

		//3.判断玩家猜测结果
		if (val > num)
		{
			cout << "大了" << endl;
		}
		else if (val < num)
		{
			cout << "小了" << endl;
		}
		else
		{
			cout << "正确" << endl;
			break;
		}
	}


	system("pause");
	return 0;
}
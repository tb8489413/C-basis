#include<iostream>
using namespace std;

int main15() {

	//1.ϵͳ���������
	int num = rand() % 100 + 1;//����0+1~99+1�����

	/*cout << num << endl;*/

	//2.��Ҳ²�
	int val = 0; //������������

	while (1)
	{
		cin >> val;

		//3.�ж���Ҳ²���
		if (val > num)
		{
			cout << "����" << endl;
		}
		else if (val < num)
		{
			cout << "С��" << endl;
		}
		else
		{
			cout << "��ȷ" << endl;
			break;
		}
	}


	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

int main14() {

	//��Ӱ����
	//10-9 ����
	//8-7 �ǳ���
	//6-5 һ��
	//5������ ��

	int score = 0;
	cout << "�����Ӱ����" << endl;
	cin >> score;

	switch (score)
	{

	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��" << endl;
		break;
	}
	


	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

int main22() {

	//���巽ʽ1
	//�������� ������[Ԫ�ظ���]
	int score[10];

	//�±긳ֵ
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	//�����±����
	cout << score[0] << endl;
	cout << score[1] << endl;

	//�ڶ��ֶ��巽ʽ
	//�������� ������[Ԫ�ظ���] = {ֵ1��ֵ2��ֵ3...}
	//���{}�ڲ���10�����ݣ�ʣ��������0��ȫ
	int score2[10] = { 100,90,80,70 };

	//������
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}

	//�����ֶ��巽ʽ
	//�������� ������[] = {ֵ1��ֵ2��ֵ3...}
	int score3[] = { 100,90,80 };

	for (int j = 0; j < 3; j++)
	{
		cout << score3[j] << endl;
	}
	system("pause");
	return 0;
}
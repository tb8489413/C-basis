#include<iostream>
using namespace std;

int main25() {

	int arr[5] = { 1,3,2,5,4 };
	cout << "Ԫ������ǰ�Ľ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//ʵ������
	//1.��¼��ʼ�±�λ��
	//2.��¼�����±�λ��
	//3.��ʼ�±�ͽ����±�Ԫ�ػ���
	//4.��ʼλ��++,����λ��--
	//5.ѭ��ִ�У�ֱ����ʼλ��>=����λ��
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end)
	{

		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;

	}
	//��ӡ���ú������
	cout << "����Ԫ�����ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	


	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

int main12() {

	//ǰ�õ���/��  ���ñ���+1��-1���ٽ��б��ʽ����
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl; // 11
	cout << "b2 = " << b1 << endl; // 110

	//���õ���/��  �Ƚ��б��ʽ���㣬���ñ���+1��-1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << endl; // 11
	cout << "b2 = " << b2 << endl; // 100



	system("pause");
	return 0;
}
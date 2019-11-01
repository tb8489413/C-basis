#include<iostream>
using namespace std;


int main18() {

	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 7 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

int main20() {

	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << "*"<< j << "=" << i*j << " ";
		}
		cout << endl;
	}*/

	for (int i = 1; i <10; i++)
	{
		
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" <<i<< " = "<< i*j << "    ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
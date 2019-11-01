#include<iostream>
using namespace std;

//语法
//char ch = 'a';
int main6() {

	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(ch) << endl;
	cout << (int)ch << endl; //查看字符a对应的ASCII码
	ch = 97;
	cout << ch << endl;
	system("pause");
	return 0;
}
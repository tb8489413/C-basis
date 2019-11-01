#include<iostream>
using namespace std;

//语法：cin >> 变量

int main11() {

	//整型输入
	int a = 0;
	cout << "请输入整型变量" << endl;
	cin >> a;
	cout << a << endl;

	//浮点型输入
	double d = 0;
	cout << "请输入双精度浮点型变量" << endl;
	cin >> d;
	cout << d << endl;

	//字符型输入
	char ch = a;
	cout << "请输入字符型变量" << endl;
	cin >> ch;
	cout << ch << endl;

	//字符串型输入
	string str = "hello" ;
	cout << "请输入字符串型变量" << endl;
	cin >> str;
	cout << str << endl;

	//布尔型输入
	bool flag = true;
	cout << "请输入布尔型变量" << endl;
	cin >> flag;
	cout << flag << endl;


	system("pause");
	return 0;
}
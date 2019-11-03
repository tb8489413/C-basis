#include<iostream>
using namespace std;

int main35() {
	int a = 10;
	int b = 10;

	//const修饰的是指针，指向可以改，指针指向的值不可以更改
	const int* p1 = &a;
	p1 = &b;//True
	//* p1 = 100;//False

	//const修饰的是常量，指向不可改，指针指向的值可以改
	int* const p2 = &a;
	//p2 = &b;//False
	*p2 = 100;//True

	system("pause");
	return 0;
}
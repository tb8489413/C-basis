#include<iostream>
using namespace std;


//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score;

}stu3;

int main39() {

	//�ṹ�����������ʽ1
	struct student stu1;//struct �ؼ��ֿ���ʡ��
	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "����" << stu1.name << "����" << stu1.age << "����" << stu1.score << endl;

	//�ṹ�����������ʽ2
	student stu2 = { "����",19,60 };
	stu2.name = "����";
	stu2.age = 19;
	stu2.score = 60;

	cout << "����" << stu2.name << "����" << stu2.age << "����" << stu2.score << endl;

	//�ṹ�����������ʽ3
	
	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;

	cout << "����" << stu3.name << "����" << stu3.age << "����" << stu3.score << endl;
	system("pause");
	return 0;
}
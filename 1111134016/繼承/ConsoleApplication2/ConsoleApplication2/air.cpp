#include <iostream>
#include<string>
#include"air.h"
using namespace std;
void shape::area()
{
	cout << result;
}

void rectangle::data_input()
{
	name = "�����";
	cout << "�p��" << name << "�����n\n";
	cout << "��J" << name << "����";
	cin >> lenght;
	cout << "��J" << name << "���e";
	cin >> width;
	result = lenght * width;
	cout << "���n:";
}

void cube::data_input()
{
	name = "�����";
	cout << "\n�p��" << name << "����n\n";
	cout << "��J" << name << "����";
	cin >> lenght;
	cout << "��J" << name << "���e";
	cin >> width;
	cout << "��J" << name << "����";
	cin >> height;
	result = lenght * width*height;
	cout << "��n:";

}
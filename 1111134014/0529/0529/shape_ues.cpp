#include<iostream>
#include"shape.h"
using namespace std;

void shape::area() {
	cout << result << endl;
}

void rectangle::date_input()
{
	name = "�����";
	cout << "\t�p��" << name << "�����n\n";
	cout << "��J" << name << "����";
	cin >> lenth;
	cout << "��J" << name << "���e";
	cin >> width;
	result = lenth * width;
	cout << "���n:";
}

void cube::date_input()
{
	name = "������";
	cout << "\t�p��" << name << "�����n\n";
	cout << "��J" << name << "����";
	cin >> height;
	cout << "��J" << name << "���e";
	cin >> width;
	cout << "��J" << name << "����";
	cin >> height;
	result = lenth * width * height;
	cout << "��n:";
}
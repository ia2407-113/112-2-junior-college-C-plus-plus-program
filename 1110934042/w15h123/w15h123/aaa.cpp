#include <iostream>
#include <string>
#include"aaa.h"
using namespace std;

void shape::area()
{
	cout << result << endl;
}

void rectangle::data_input()
{
	name = "�����";
	cout << "�p��" << name << "�����n\n";
	cout << "��J" << name << "����:";
	cin >> l;
	cout << "��J" << name << "���e:";
	cin >> w;
	result = l * w;
	cout << "���n:";
}

void cube::data_input()
{
	name = "������";
	cout << "�p��" << name << "����n\n";
	cout << "��J" << name << "����:";
	cin >> l;
	cout << "��J" << name << "���e:";
	cin >> w;
	cout << "��J" << name << "����:";
	cin >> h;
	result = l * w * h;
	cout << "��n:";
}
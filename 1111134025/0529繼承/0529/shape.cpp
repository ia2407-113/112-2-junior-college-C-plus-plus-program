#include "shape.h"
using namespace std;

#include <iostream>
#include <string>

void shape::area(){
	cout << result << endl;
}

void rectangle::data_input()
{
	name = "�����";
	cout << "\t�p��" << name << "�����n\n";
	cout << "��J" << name << "����";
	cin >> lenght;
	cout << "��J" << name << "���e";
	cin >> width;
	result = lenght * width;
	cout << "���n:";
}

void cube::data_input()
{
	name = "������";
	cout << "\t�p��" << name << "�����n\n";
	cout << "��J" << name << "����";
	cin >> lenght;
	cout << "��J" << name << "���e";
	cin >> width;
	cout << "��J" << name << "����";
	cin >> height;
	result = lenght * width*height;
	cout << "��n:";
}


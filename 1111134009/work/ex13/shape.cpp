#include "shape.h"
using namespace std;

#include <iostream>
#include <string>

void shape::area() {
	cout << result << endl;
}

void rectangle::data_input()
{
	name = "�����";
	cout << "�p��" << name << "�����n�G\n";
	cout << "��J" << name << "�����G";
	cin >> length;
	cout << "��J" << name << "���e�G";
	cin >> width;
	result = length * width;
	cout << "���n:";
}

void cube::data_input()
{
	name = "������";
	cout << "�p��" << name << "�����n�G\n";
	cout << "��J" << name << "�����G";
	cin >> height;
	result = length * width * height;
	cout << "��n:";
}
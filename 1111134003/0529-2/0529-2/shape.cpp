#include <iostream>
#include <string>
#include"shape.h"
using namespace std;

void shape::area()
{
	cout << "�ϧΦW��:";
	cin >> name;
}

void rectangle::data_input()
{
	cout << "�����骺��:";
	cin >> length;
	cout << "�����骺�e:";
	cin >> width;
}

void cube::data_input()
{
	cout << "�����骺��:";
	cin >> height;
	shape_area = length * width * height;
	cout << "�ϧέ��n:" << shape_area;
}
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

void shape::area()
{
	cout << result;
}
void rectangle::data_input() {
	name = "�����";
	cout << "�p��" << name << "�����n\n";
	cout << "��J" << name << "����:";
	cin >> length;
	cout << "��J" << name << "���e:";
	cin >> width;
	result = width * length;
	cout << "���n:";
}
void cube::data_input()
{
	name = "������";
	cout << "\n�p��" << name << "����n\n";
	cout << "��J" << name << "����:";
	cin >> length;
	cout << "��J" << name << "���e:";
	cin >> width;
	cout << "��J" << name << "����:";
	cin >> height;
	result = width * length * height;
	cout << "��n:";
}
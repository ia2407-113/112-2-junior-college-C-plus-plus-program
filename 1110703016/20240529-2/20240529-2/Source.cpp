#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

void shape::area() {
	cout << result << "\n" << endl;
}

void rectangle::data_input() {
	name = "�����";
	cout << "�p��" << name << "�����n\n";
	cout << "��J" << name << "�����G";
	cin >> length;
	cout << "��J" << name << "���e�G";
	cin >> width;
	result = length * width;
	cout << "���n�G";
}

void cube::data_input() {
	name = "������";
	cout << "�p��" << name << "����n\n";
	cout << "��J" << name << "�����G";
	cin >> length;
	cout << "��J" << name << "���e�G";
	cin >> width;
	cout << "��J" << name << "�����G";
	cin >> height;
	result = length * width * height;
	cout << "��n�G";
}
#include <iostream>
#include <string>
using namespace std;
#include "air.h"

void shape::area() {
	cout << result << endl;
}

void rectangle::datainput() {
	name = "�����";
	cout << "�p��" << name << "�����n\n";
	cout << "��J" << name << "����\n";
	cin >> length;
	cout << "��J" << name << "���e\n";
	cin >> width;
	result = length * width;
	cout << "���n:" ;
}
void cube::datainput() {
	name = "������";
	cout << "�p��" << name << "����n\n";
	cout << "��J" << name << "����\n";
	cin >> length;
	cout << "��J" << name << "���e\n";
	cin >> width;
	cout << "��J" << name << "����\n";
	cin >> height;

	result = length * width*height;
	cout << "��n:" ;
}
#include <iostream>
#include <string>
#include"shape.h"

//��@��
using namespace std;

void shape::shape_area() {
	cout << result << endl;
}

void rectangle::data_input() {
	cout << "�p�����έ��n\n";
	cout << "��J��:";
	cin >> length;
	cout << "��J�e:";
	cin >> width;
	result = length * width;
	cout << "���n��:";
}

void cube::data_input() {
	cout << "�p���������n\n";
	cout << "��J��:";
	cin >> height;
	result = length * width * height;
	cout << "��n��:";
}
#include "shape.h"
#include <iostream>
#include <string>
using namespace std;
void shape::area()
{
	
	cout << name << "," << result<< "\n";
}
void rectangle::datainput()
{
	cout << "��J�W��";
	cin >> name;
	cout << "��J���e";
	cin >> length;
	cin >> width;
	result = length * width;
	cout << "��X�W�ٻP���n\n";
	
}
void cube::datainput()
{
	cout << name << "��n\n" << "��J��";
	cin >> hieght;
	result = length * width * hieght;
	cout << "��X�W�ٻP��n\n";
}

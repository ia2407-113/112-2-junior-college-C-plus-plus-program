#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

void shape::area()
{
	cout << result;
}
void rectangle::data_input() {
	name = "長方形";
	cout << "計算" << name << "的面積\n";
	cout << "輸入" << name << "的長:";
	cin >> length;
	cout << "輸入" << name << "的寬:";
	cin >> width;
	result = width * length;
	cout << "面積:";
}
void cube::data_input()
{
	name = "長方體";
	cout << "\n計算" << name << "的體積\n";
	cout << "輸入" << name << "的長:";
	cin >> length;
	cout << "輸入" << name << "的寬:";
	cin >> width;
	cout << "輸入" << name << "的高:";
	cin >> height;
	result = width * length * height;
	cout << "體積:";
}
#include <iostream>
#include <string>
#include"air.h"
void shape::area() {
	cout << result << endl;
}

void rectangle::data_input()
{
	name = "長方形";
	cout << "計算" << name << "的面積\n";
	cout << "輸入" << name << "的長:";
	cin >> lenght;
	cout << "輸入" << name << "的寬:";
	cin >> width;
	result = lenght * width;
	cout << "面積:";
}

void cube::data_input()
{
	name = "長方體";
	cout << "計算" << name << "的面積\n";
	cout << "輸入" << name << "的長:";
	cin >> lenght;
	cout << "輸入" << name << "的寬:";
	cin >> width;
	cout << "輸入" << name << "的高:";
	cin >> height;
	result = lenght * width * height;
	cout << "體積:";
}
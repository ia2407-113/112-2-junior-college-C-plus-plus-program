#include<iostream>
#include"shape.h"
using namespace std;

void shape::area() {
	cout << result << endl;
}

void rectangle::date_input()
{
	name = "長方形";
	cout << "\t計算" << name << "的面積\n";
	cout << "輸入" << name << "的長";
	cin >> lenth;
	cout << "輸入" << name << "的寬";
	cin >> width;
	result = lenth * width;
	cout << "面積:";
}

void cube::date_input()
{
	name = "長方體";
	cout << "\t計算" << name << "的面積\n";
	cout << "輸入" << name << "的長";
	cin >> height;
	cout << "輸入" << name << "的寬";
	cin >> width;
	cout << "輸入" << name << "的高";
	cin >> height;
	result = lenth * width * height;
	cout << "體積:";
}
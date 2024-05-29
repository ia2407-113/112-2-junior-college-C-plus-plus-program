#include <iostream>
#include <string>
#include"shape.h"
using namespace std;

void shape::area()
{
	cout << "圖形名稱:";
	cin >> name;
}

void rectangle::data_input()
{
	cout << "長方體的長:";
	cin >> length;
	cout << "長方體的寬:";
	cin >> width;
}

void cube::data_input()
{
	cout << "長方體的高:";
	cin >> height;
	shape_area = length * width * height;
	cout << "圖形面積:" << shape_area;
}
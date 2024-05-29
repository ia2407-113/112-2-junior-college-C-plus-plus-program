#include <iostream>
#include <string>
#include"shape.h"

//實作檔
using namespace std;

void shape::shape_area() {
	cout << result << endl;
}

void rectangle::data_input() {
	cout << "計算長方形面積\n";
	cout << "輸入長:";
	cin >> length;
	cout << "輸入寬:";
	cin >> width;
	result = length * width;
	cout << "面積為:";
}

void cube::data_input() {
	cout << "計算長方體體積\n";
	cout << "輸入高:";
	cin >> height;
	result = length * width * height;
	cout << "體積為:";
}
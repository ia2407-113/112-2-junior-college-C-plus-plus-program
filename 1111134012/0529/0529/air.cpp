#include <iostream>
#include <string>
using namespace std;
#include "air.h"

void shape::area() {
	cout << result << endl;
}

void rectangle::datainput() {
	name = "長方形";
	cout << "計算" << name << "的面積\n";
	cout << "輸入" << name << "的長\n";
	cin >> length;
	cout << "輸入" << name << "的寬\n";
	cin >> width;
	result = length * width;
	cout << "面積:" ;
}
void cube::datainput() {
	name = "長方體";
	cout << "計算" << name << "的體積\n";
	cout << "輸入" << name << "的長\n";
	cin >> length;
	cout << "輸入" << name << "的寬\n";
	cin >> width;
	cout << "輸入" << name << "的高\n";
	cin >> height;

	result = length * width*height;
	cout << "體積:" ;
}
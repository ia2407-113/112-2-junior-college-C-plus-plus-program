#include <iostream>
#include <string>
#include"aaa.h"
using namespace std;

void shape::area()
{
	cout << result << endl;
}

void rectangle::data_input()
{
	name = "長方形";
	cout << "計算" << name << "的面積\n";
	cout << "輸入" << name << "的長:";
	cin >> l;
	cout << "輸入" << name << "的寬:";
	cin >> w;
	result = l * w;
	cout << "面積:";
}

void cube::data_input()
{
	name = "長方體";
	cout << "計算" << name << "的體積\n";
	cout << "輸入" << name << "的長:";
	cin >> l;
	cout << "輸入" << name << "的寬:";
	cin >> w;
	cout << "輸入" << name << "的高:";
	cin >> h;
	result = l * w * h;
	cout << "體積:";
}
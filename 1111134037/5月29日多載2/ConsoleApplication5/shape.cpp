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
	cout << "輸入名稱";
	cin >> name;
	cout << "輸入長寬";
	cin >> length;
	cin >> width;
	result = length * width;
	cout << "輸出名稱與面積\n";
	
}
void cube::datainput()
{
	cout << name << "體積\n" << "輸入高";
	cin >> hieght;
	result = length * width * hieght;
	cout << "輸出名稱與體積\n";
}

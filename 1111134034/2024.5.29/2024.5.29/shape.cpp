#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

void shape::area()
{
    name = "長方形";
}
void rectangle::date_input()
{
    cout << "\n計算" << name << "的面積\n";
    cout << "輸入" << name << "的長";
    cin >> length;
    cout << "輸入" << name << "的寬";
    cin >> width;
}
void cube::date_input()
{
    cout << "輸入" << name << "的高";
    cin >> height;
    result = width * length * height;
    cout << "面積" << result;
}
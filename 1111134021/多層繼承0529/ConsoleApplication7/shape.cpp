#include <iostream>
#include <string>
#include "shape.h"  
using namespace std;

void shape::area()
{
    cout << "圖形名稱:";
    cin >> name;
}

void rectangle::data_input()
{
    cout << "請輸入長方體的長:";
    cin >> length;
    cout << "請輸入長方體的寬:";
    cin >> width;
}

void cube::data_input()
{
    cout << "請輸入長方體的高:";
    cin >> height;
    shape_area = height * length * width;
    cout << "圖形的面積為:" << shape_area;
}
#include <iostream>
#include <string>
#include"cube.h"
using namespace std;
// 飛行物體類別 
void shape::area()
{
    cout << result << endl;
}
// 空中巴士客機類別
void rectangle::data_input()
{
    name = "長方形";
    cout << "\t計算" << name << "的面積\n";
    cout << "輸入" << name << "的長:";
    cin >> length;
    cout << "輸入" << name << "的寬:";
    cin >> width;
    result = length * width;
    cout << "面積:";
}
void cube::data_input()
{
    name = "長方體";
    cout << "\t計算" << name << "的面積\n";
    cout << "輸入" << name << "的長:";
    cin >> length;
    cout << "輸入" << name << "的寬:";
    cin >> width;
    cout << "輸入" << name << "的高:";
    cin >> height;
    result = length * width*height;
    cout << "體積:";

}
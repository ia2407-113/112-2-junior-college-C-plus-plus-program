// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include "ConsoleApplication4.h"
using namespace std;
// 立方體體積計算函數
void volume(int side, double&result)
{
    result = side * side * side;
}

// 球體體積計算函數
void volume(double radius, double&result)
{
    result = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

// 圓柱體體積計算函數
void volume(double radius, double height, double&result)
{
    result = 3.14159 * radius * radius * height;
}

// 長方體體積計算函數
void volume(double length, double width, double height, double&result) {
    result = length * width * height;
}

int main() {
    int side;
    double radius, height, length, width;
    double result;//儲存

    // 立方體
    cout << "請輸入立方體的邊長：";
    cin >> side;
    volume(side, result);//呼叫計算函式
    cout << "立方體的體積為：" << result;

    // 球體
    cout << "請輸入球體的半徑：";
    cin >> radius;
    volume(radius, result);//呼叫計算函式
    cout << "球體的體積為：" << result;

    // 圓柱體
    cout << "請輸入圓柱體的半徑：";
    cin >> radius;
    cout << "請輸入圓柱體的高度：";
    cin >> height;
    volume(radius, height, result);//呼叫計算函式
    cout << "圓柱體的體積為：" << result;

    // 長方體
    cout << "請輸入長方體的長：";
    cin >> length;
    cout << "請輸入長方體的寬：";
    cin >> width;
    cout << "請輸入長方體的高：";
    cin >> height;
    volume(length, width, height, result);//呼叫計算函式
    cout << "長方體的體積為：" << result;
}

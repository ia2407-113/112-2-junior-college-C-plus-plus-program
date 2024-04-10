#include <iostream>
using namespace std;

// 函數原型宣告
void volume(int sideLength, int* result);
void volume(double radius, double* result);
void volume(double radius, double height, double* result);
void volume(double length, double width, double height, double* result);

int main() {
    int sideLength;
    double radius, cylinderRadius, cylinderHeight, rectLength, rectWidth, rectHeight;
    int resultInt;
    double resultDouble;
    //  &  resultDouble 是取得 resultDouble 變數的地址，也就是將其地址傳遞給 volume 函數中的 double* result 參數
    // 計算立方體體積
    cout << "請輸入立方體的邊長：";
    cin >> sideLength;
    volume(sideLength, &resultInt); // 呼叫計算立方體體積的函數，並將結果存入 resultInt 中
    cout << "立方體體積: " << resultInt << endl;

    // 計算球體體積
    cout << "請輸入球體的半徑：";
    cin >> radius;
    volume(radius, &resultDouble); // 呼叫計算球體體積的函式，並將結果存入 resultDouble 中
    cout << "球體體積: " << resultDouble << endl;

    // 計算圓柱體體積
    cout << "請輸入圓柱體的半徑和高度：";
    cin >> cylinderRadius >> cylinderHeight;
    volume(cylinderRadius, cylinderHeight, &resultDouble); // 呼叫計算圓柱體體積的函數，並將結果存入 resultDouble 中
    cout << "圓柱體體積: " << resultDouble << endl;

    // 計算長方體體積
    cout << "請輸入長方體的長、寬和高：";
    cin >> rectLength >> rectWidth >> rectHeight;
    volume(rectLength, rectWidth, rectHeight, &resultDouble); // 呼叫計算長方體體積的函數，並將結果存入 resultDouble 中
    cout << "長方體體積: " << resultDouble << endl;

    return 0;
}

// 計算立方體體積
void volume(int sideLength, int* result) {
    *result = sideLength * sideLength * sideLength; // 將計算結果存入 result 指向的地址中
}

// 計算球體體積
void volume(double radius, double* result) {
    *result = 4.0 / 3.0 * 3.14159 * radius * radius * radius; // 將計算結果存入 result 指向的地址中
}

// 計算圓柱體體積
void volume(double radius, double height, double* result) {
    *result = 3.14159 * radius * radius * height; // 將計算結果存入 result 指向的地址中
}

// 計算長方體體積
void volume(double length, double width, double height, double* result) {
    *result = length * width * height; // 將計算結果存入 result 指向的地址中
}

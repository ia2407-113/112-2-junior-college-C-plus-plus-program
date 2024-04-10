#include <iostream>
#include <cmath> // 包含數學函數庫以使用 pow 函數

using namespace std;
void volume(int sideLength, double* result);//宣告4
void volume(float radius, double* result);
void volume(float radius, float height, double* result);
void volume(float length, float width, float height, double* result);

int main() {
    double result;

    // 立方體體積計算
    int Length1 = 5;
    cout << "輸入";
    cin >> Length1;
    volume(Length1, &result);
    cout << "立方體體積：" << result << endl;

    // 球體體積計算（以半徑為參數）
    float radius = 4.0;
    cout << "輸入";
    cin >> radius;
    volume(radius, &result);
    cout << "球體體積：" << result << endl;

    // 圓柱體體積計算（以半徑和高度為參數）
    float Radius = 2.0;
    float Height2 = 3.0;
    cout << "輸入";
    cin >> Radius >> Height2;
    volume(Radius, Height2, &result);
    cout << "圓柱體體積：" << result << endl;

    // 長方體體積計算（以長、寬和高為參數）
    float Length2 = 2.5;
    float Width = 3.5;
    float Height3 = 4.0;
    cout << "輸入";
    cin >> Length2 >> Width >> Height3;
    volume(Length2, Width, Height3, &result);
    cout << "長方體體積：" << result << endl;

    return 0;
}
// 立方體體積計算函數
void volume(int sideLength, double* result) {
    *result = pow(sideLength, 3);
}

// 球體體積計算函數
void volume(float radius, double* result) {
    *result = (4.0 / 3.0) * 3.14 * pow(radius, 3);
}

// 圓柱體體積計算函數
void volume(float radius, float height, double* result) {
    *result = 3.14 * pow(radius, 2) * height;
}

// 長方體體積計算函數
void volume(float length, float width, float height, double* result) {
    *result = length * width * height;
}
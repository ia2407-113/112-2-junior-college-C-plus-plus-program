#include <iostream>
#include <cmath>

using namespace std;

// 函數多載：計算立方體體積
void volume(int side, double& result) {
    result = pow(side, 3);
}

// 函數多載：計算球體體積
void volume(float diameter, double& result) {
    float radius = diameter / 2.0;
    result = (4.0 / 3.0) * 3.14159265358979323846 * pow(radius, 3);
}

// 函數多載：計算圓柱體體積
void volume(float radius, float height, double& result) {
    result = 3.14159265358979323846 * pow(radius, 2) * height;
}

// 函數多載：計算長方體體積
void volume(float length, float width, float height, double& result) {
    result = length * width * height;
}

int main() {
    double result;
    int a, b, c, d, e, f, g, h;

    // 計算立方體體積
    cout << "請輸入一個值";
    cin >> a;
    int side = a;
    volume(side, result);
    cout << "立方體體積：" << result << endl;

    // 計算球體體積
    cout << "請輸入一個值";
    cin >> b;
    float diameter =b;
    volume(diameter, result);
    cout << "球體體積：" << result << endl;

    // 計算圓柱體體積
    cout << "請輸入兩個值";
    cin >> c;
    cin >> d;
    float cylinder_radius = c;
    float cylinder_height = d;
    volume(cylinder_radius, cylinder_height, result);
    cout << "圓柱體體積：" << result << endl;

    // 計算長方體體積
    cout << "請輸入三個值";
    cin >> e;
    cin >> f;
    cin >> g;
    float box_length = e;
    float box_width = f;
    float box_height = g;
    volume(box_length, box_width, box_height, result);
    cout << "長方體體積：" << result << endl;

    return 0;
}

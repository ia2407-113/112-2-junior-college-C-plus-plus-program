#include <iostream>
using namespace std;

// 計算立方體體積
void volume(int sideLength, double& result) {
    result = sideLength * sideLength * sideLength;
}

// 計算球體體積
void volume(double diameter, double& result) {
    double radius = diameter / 2.0;
    result = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

// 計算圓柱體體積
void volume(double radius, double height, double& result) {
    result = 3.14159 * radius * radius * height;
}

// 計算長方體體積
void volume(double length, double width, double height, double& result) {
    result = length * width * height;
}

int main() {
    double result;

    // 立方體體積
    int sideLength;
    cout << "請輸入立方體的邊長: ";
    cin >> sideLength;
    volume(sideLength, result);
    cout << "立方體體積: " << result << endl;

    // 球體體積
    double diameter;
    cout << "請輸入球體的直徑: ";
    cin >> diameter;
    volume(diameter, result);
    cout << "球體體積: " << result << endl;

    // 圓柱體體積
    double radius, height;
    cout << "請輸入圓柱體的半徑和高: ";
    cin >> radius >> height;
    volume(radius, height, result);
    cout << "圓柱體體積: " << result << endl;

    // 長方體體積
    double length, width;
    cout << "請輸入長方體的長、寬和高: ";
    cin >> length >> width >> height;
    volume(length, width, height, result);
    cout << "長方體體積: " << result << endl;

    return 0;
}

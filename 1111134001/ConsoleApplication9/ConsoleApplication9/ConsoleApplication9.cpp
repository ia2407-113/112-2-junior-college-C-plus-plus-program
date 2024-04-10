#include <iostream>
#include <cmath>

using namespace std;


// 立方體體積
void volume(int side, double& result) {
    result = pow(side, 3);                  //函數定義
}

// 球體體積
void volume(float diameter, double& result) {
    const float pi = 3.14159;
    float radius = diameter / 2;                //函數定義
    result = (4.0 / 3.0) *pi* pow(radius, 3);
}

// 圓柱體體積
void volume(float radius, float height, double& result) {
    const float pi = 3.14159;                        //函數定義
    result = pi* pow(radius, 2) * height;
}

// 長方體體積                                            //函數定義
void volume(float length, float width, float height, double& result) {
    result = length * width * height;
}

int main() {
    double result;

    // 立方體體積
    int side;
    cout << "請輸入立方體的邊長：";
    cin >> side;
    volume(side, result);
    cout << "立方體的體積為：" << result << endl;

    // 球體體積
    float diameter;
    cout << "請輸入球體的直徑：";
    cin >> diameter;
    volume(diameter, result);
    cout << "球體的體積為：" << result << endl;

    // 圓柱體體積
    float radius, height;
    cout << "請輸入圓柱體的半徑和高度：";
    cin >> radius >> height;
    volume(radius, height, result);
    cout << "圓柱體的體積為：" << result << endl;

    // 長方體體積
    float length, width;
    cout << "請輸入長方體的長、寬和高：";
    cin >> length >> width >> height;
    volume(length, width, height, result);
    cout << "長方體的體積為：" << result << endl;

    return 0;
}
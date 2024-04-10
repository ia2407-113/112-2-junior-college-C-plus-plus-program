
#include <iostream>
#include <cmath>

using namespace std;

// 立方體體積
void volume(int side, double& result) {
    result = pow(side, 3);
}

// 球體體積
void volume(float diameter, double& result) {
    double radius = diameter / 2;
    result = (4.0 / 3.0) * std::acos(-1.0) * pow(radius, 3);
}

// 圓柱體體積
void volume(float radius, float height, double& result) {
    result = std::acos(-1.0) * pow(radius, 2) * height;
}

// 長方體體積
void volume(float length, float width, float height, double& result) {
    result = length * width * height;
}

int main() {
    double result;
    int a, b, c, d,e,f,g;

    // 立方體體積
    cout << "請輸入長";
    cin >> a;
    int side = a;
    volume(side, result);
    cout << "立方體體積: " << result << endl;
    

    // 球體體積
    cout << "請輸入值";
    cin >> b;
    float diameter = b;
    volume(diameter, result);
    cout << "球體體積: " << result << endl;


    // 圓柱體體積
    cout << "請輸入高";
    cin >> c;
    cout << "請輸入半徑";
    cin >> d;
    float radius = c;
    float height = d;
    volume(radius, height, result);
    cout << "圓柱體體積: " << result << endl;

    // 長方體體積
    cout << "請輸入長";
    cin >> e;
    cout << "請輸入寬";
    cin >> f;
    cout << "請輸入高";
    cin >> g;
    float length = e;
    float width = f;
    height = g;
    volume(length, width, height, result);
    cout << "長方體體積: " << result << endl;

    return 0;
}



// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

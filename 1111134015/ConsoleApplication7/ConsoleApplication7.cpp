// ConsoleApplication7.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <cmath>

using namespace std;

// 立方體體積計算函數
void volume(int side, double& result) {
    result = pow(side, 3);
}

// 球體體積計算函數
void volume(float diameter, double& result) {
    float radius = diameter / 2.0;
    result = (4.0 / 3.0) * 3.14 * pow(radius, 3);
}

// 圓柱體體積計算函數
void volume(float radius, float height, double& result) {
    result = 3.14 * pow(radius, 2) * height;
}

// 長方體體積計算函數
void volume(float length, float width, float height, double& result) {
    result = length * width * height;
}

int main() {
    int choice;
    double result;

    cout << "請選擇計算體積的形狀：" << endl;
    cout << "1. 立方體" << endl;
    cout << "2. 球體" << endl;
    cout << "3. 圓柱體" << endl;
    cout << "4. 長方體" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        int side;
        cout << "請輸入立方體的邊長：";
        cin >> side;
        volume(side, result);
        break;
    case 2:
        float diameter;
        cout << "請輸入球體的直徑：";
        cin >> diameter;
        volume(diameter, result);
        break;
    case 3:
        float radius, height;
        cout << "請輸入圓柱體的底面半徑：";
        cin >> radius;
        cout << "請輸入圓柱體的高度：";
        cin >> height;
        volume(radius, height, result);
        break;
    case 4:
        float length, width, h;
        cout << "請輸入長方體的長：";
        cin >> length;
        cout << "請輸入長方體的寬：";
        cin >> width;
        cout << "請輸入長方體的高：";
        cin >> h;
        volume(length, width, h, result);
        break;
    default:
        cout << "無效的選擇！" << endl;
        return 0;
    }

    cout << "體積為：" << result << endl;

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

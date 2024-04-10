// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <cmath> // 引入數學函式庫以使用常數 pi
using namespace std;
void volume(int side, double& result);
void volume(double diameter, double& result);
void volume(double radius, double height, double& result);
void volume(double length, double width, double height, double& result);
// 立方體體積計算函式，接受立方體的邊長作為參數
void volume(int side, double& result) {
    // 使用 pow 函式計算立方體體積，並將結果儲存在 result 參數中
    result = pow(side, 3);
}

// 球體體積計算函式，接受球體的直徑作為參數
void volume(double diameter, double& result) {
    // 計算球體半徑，然後使用球體體積公式計算體積，最後將結果儲存在 result 參數中
    double radius = diameter / 2;
    result = (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}

// 圓柱體體積計算函式，接受圓柱體的半徑和高度作為參數
void volume(double radius, double height, double& result) {
    // 使用圓柱體體積公式計算體積，最後將結果儲存在 result 參數中
    result = 3.14159 * pow(radius, 2) * height;
}

// 長方體體積計算函式，接受長方體的長、寬和高作為參數
void volume(double length, double width, double height, double& result) {
    // 直接計算長方體體積，最後將結果儲存在 result 參數中
    result = length * width * height;
}

int main() {
    double result;
    int choice; // 用戶的選擇

    // 提示選擇計算體積的形狀
    cout << "請選擇計算體積的形狀:\n";
    cout << "1. 立方體\n";
    cout << "2. 球體\n";
    cout << "3. 圓柱體\n";
    cout << "4. 長方體\n";
    cout << "請輸入選擇(1-4): ";
    cin >> choice;

    // 根據選擇執行相應的程式碼
    switch (choice) {
    case 1: // 立方體
        int side;
        cout << "請輸入立方體的邊長: ";
        cin >> side;
        volume(side, result);
        cout << "立方體體積: " << result << endl;
        break;
    case 2: // 球體
        double diameter;
        cout << "請輸入球體的直徑: ";
        cin >> diameter;
        volume(diameter, result);
        cout << "球體體積: " << result << endl;
        break;
    case 3: // 圓柱體
        double radius, height;
        cout << "請輸入圓柱體的半徑: ";
        cin >> radius;
        cout << "請輸入圓柱體的高度: ";
        cin >> height;
        volume(radius, height, result);
        cout << "圓柱體體積: " << result << endl;
        break;
    case 4: // 長方體
        double length, width, height2;
        cout << "請輸入長方體的長: ";
        cin >> length;
        cout << "請輸入長方體的寬: ";
        cin >> width;
        cout << "請輸入長方體的高: ";
        cin >> height2;
        volume(length, width, height2, result);
        cout << "長方體體積: " << result << endl;
        break;
    default:
        cout << "無效選擇！請輸入 1 到 4 之間的整數。\n";
        break;
    }

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

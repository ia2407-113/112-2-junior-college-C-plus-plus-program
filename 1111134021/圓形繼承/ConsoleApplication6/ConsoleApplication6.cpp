// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <string>
#include "circle.h"
using namespace std;

int main()
{
    cylinder_3D caculate;
    cron_3D compute;

    cout << "請輸入半徑";
    cin >> caculate.radius;
    cout << "請輸入圓柱體高";
    cin >> caculate.height;
    cout << "請輸入圓錐體高";
    cin >> compute.height;

    compute.radius = caculate.radius;
    caculate.area = caculate.compute_area();
    caculate.volume = caculate.compute_volume();
    caculate.surface = caculate.compute_surface();
    compute.volume = compute.compute_volume();

    cout << "圓面積為" << caculate.area << endl;
    cout << "圓柱體體積為" << caculate.volume << endl;
    cout << "圓柱體表面積為" << caculate.surface << endl;
    cout << "圓錐體體積為" << compute.volume << endl;
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

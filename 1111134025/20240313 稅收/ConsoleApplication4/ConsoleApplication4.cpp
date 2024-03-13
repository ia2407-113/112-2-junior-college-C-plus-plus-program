﻿// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    int shopping;
    float taxes;

    cout << "輸入年收入";
    cin >> shopping;

    if (shopping <= 560000)
    {
        taxes = shopping*0.05;
        cout << "稅收為" << taxes<<" 級距 5%";
    }
    else if (shopping >560000 && shopping <= 1260000)
    {
        taxes = shopping * 0.12 - 39200;
        cout << "稅收為" << taxes << " 級距 12%";
    }
    else if (shopping > 1260000 && shopping <= 2520000)
    {
        taxes = shopping * 0.2 - 140000;
        cout << "稅收為" << taxes << " 級距 20%";
    }
    else if (shopping > 2520000 && shopping <= 4720000)
    {
        taxes = shopping * 0.3 - 392000;
        cout << "稅收為" << taxes << " 級距 30%";
    }
    else
    {
        taxes = shopping * 0.4 - 864000;
        cout << "稅收為" << taxes << " 級距 40%";
    }
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

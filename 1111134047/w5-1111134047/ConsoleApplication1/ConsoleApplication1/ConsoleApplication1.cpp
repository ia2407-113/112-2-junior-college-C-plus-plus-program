﻿// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "輸入你的收入";
    cin >> a;
    if (a <= 560000)
    {
        d = 5;
        b = a * 0.05;
        c = b;
    }
    else if (a >= 560001 && a <= 1260000)
    {
        d = 12;
        b = a * 0.12;
        c = b - 39200;
    }
    else if (a >= 1260001 && a <= 2520000)
    {
        d = 20;
        b = a * 0.2;
        c = b - 140000;
    }
    else if (2520001 <= a < 4720000)
    {
        d = 30;
        b = a * 0.3;
        c = b - 392000;
    }
    else if (a >= 4720001)
    {
        d = 40;
        b = a * 0.4;
        c = b - 864000;
    }
    cout << "應繳稅級距" << d << "%\n";
    cout << "應繳稅金額" << c;
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

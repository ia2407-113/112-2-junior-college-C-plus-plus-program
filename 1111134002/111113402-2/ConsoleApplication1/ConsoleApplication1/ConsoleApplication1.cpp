﻿// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
using namespace std;
int main()
{
    string name[5], phone[5], search;
    for (int i = 0; i < 5; i++)
    {
        cout << "請輸入第" << i + 1 << "位朋友的姓名:";
        cin >> name[i];
        cout << "請輸入第" << i + 1 << "位朋友的電話:";
        cin >> phone[i];
    }
    cout << "請輸入要查詢的朋友之姓名:";
    cin >> search;
    for (int i = 0; i < 5; i++)
    {
        if (search == name[i])
        {
            cout << "他的電話是:" << phone[i];
            return 0;
        }
    }
    cout << "查無資料";
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

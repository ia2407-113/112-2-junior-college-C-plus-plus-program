// 522homework.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include "date.h"
#include "pet.h" // Employee class definition
#include "Time.h"
using namespace std;

int main()
{
    Date birth(7, 24, 1949), birth1(5, 9, 1974);
    Date adopt1(3, 12, 1965), adopt2(11, 30, 1980);
    Time feedTime1(8, 30), feedTime2(9, 0);   //兩個餵食時間

    Pet parrot1("肥肥", "非洲灰鸚鵡", birth, adopt1, feedTime1),
        parrot2("壯壯", "亞馬遜鸚鵡", birth1, adopt2, feedTime2);

    parrot1.print();
    parrot2.print();

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

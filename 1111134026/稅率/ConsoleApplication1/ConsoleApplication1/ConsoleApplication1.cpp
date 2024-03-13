// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main() 
{
  int income,tax;
    // 输入綜合所得淨額
    cout<<"請輸入綜合所得淨額:";
    cin>>income;

    // 根據綜合所得淨額計算應納稅額
    if (income >= 0 && income <= 560000) {
        tax = (income * 0.05);
        cout << "應納稅額為:" << tax << "稅率5%";
    }
    else if (income >=560001 && income <=1260000)
    {
        tax = (income  * 0.12)-39200;
        cout << "應納稅額為:"<<tax<<"稅率12%";
    }
    else if (income >= 1260001 && income <= 2520000) {
        tax = (income * 0.2)- 140000;
        cout << "應納稅額為:" << tax << "稅率20%";
    }
    else if (income >= 2520001 && income <= 472000) {
        tax=(income * 0.3)-392000;
        cout << "應納稅額為:" << tax << "稅率30%";
    }
    else {
        tax= (income* 0.4)- 864000;
        cout << "應納稅額為:" <<tax<< "稅率40%";
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

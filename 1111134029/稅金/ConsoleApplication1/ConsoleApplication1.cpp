// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    float money,ans;
    cout << "請輸入收入:";
    cin >> money;
    if (money <= 560000)
    {
        ans = money * 0.05;
        cout << "級距稅率5%";
    }
    else if (money >= 560001 && money <= 1260000)
    {
        ans = money * 0.12 - 39200;
        cout << "級距稅率12%";
    }
    else if (money >= 1260001 && money <= 2520000)
    {
        ans = money * 0.2 - 140000;
        cout << "級距稅率20%";
    }
    else if (2520001 >= money && money <= 4720000)
    {
        ans = money * 0.3 - 392000;
        cout << "級距稅率30%";
    }
    else 
    {
        ans = money * 0.4 - 864000;
        cout << "級距稅率40%";
    }
    cout << "稅金" << ans;
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

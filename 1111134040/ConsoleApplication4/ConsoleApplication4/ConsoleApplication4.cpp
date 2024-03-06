// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int money, sale;
    cout << "輸入購物金額:";
    cin >> money;
    cout << "購物金額" << money
        << ",禮卷有" << money/10000*1000;

    return 0;
}
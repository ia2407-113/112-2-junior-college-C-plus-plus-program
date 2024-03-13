// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int money;
    cout << "輸入綜合所得淨額";
    cin >> money;
    if (money && money < 560000)
    {
        cout << "你的應繳稅額" << money * 0.05 - 0 << "稅率為" << "5%";
    }
    else if (560000 < money && money < 1260001)
    {
        cout << "你的應繳稅額" << money * 0.12 - 39200 << "稅率為" << "12%";
    }
    else if (1260000 < money && money < 2520001)
    {
        cout << "你的應繳稅額" << money * 0.20 - 140000 << "稅率為" << "20%";
    }
    else if (2520000 < money && money < 4720001)
    {
        cout << "你的應繳稅額" << money * 0.30 - 392000 << "稅率為" << "30%";
    }
    else
    {
        cout << "你的應繳稅額" << money * 0.40 - 864000 << "稅率為" << "40%";
    }
}

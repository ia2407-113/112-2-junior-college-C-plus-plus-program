// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;
int main()
{
    float m, kg;
    cout << "輸入身高與體重:";
    cin >> m >> kg;
    cout << "身高為" << m
        << ",體重為" << kg
        << ",BMI為=" << kg / (m*m);

    return 0;
}
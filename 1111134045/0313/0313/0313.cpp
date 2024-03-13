
#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "請輸入淨額:";
    cin >> money;
    if (money <= 560000 && money > 0) {
    cout << "稅率為5%";
    cout << "應納稅額為:" << money * 0.05;
    }
    else if (money <= 1260000 && money >= 560001) {
        cout << "稅率為12%\n";
        cout << "應納稅額為:" << (money * 0.12) - 39200;
    }
    else if (money <= 2520000 && money >= 1260001) {
        cout << "稅率為20%\n";
        cout << "應納稅額為:" << (money * 0.2) - 140000;
    }
    else if (money <= 4720000 && money >= 2520001) {
        cout << "稅率為30%\n";
        cout << "應納稅額為:" << (money * 0.3) - 392000;
    }
    else if (money >= 4720001 && money > 0) {
        cout << "稅率為40%\n";
        cout << "應納稅額為:" << (money * 0.4) - 864000;
    }
    else
    {
        cout << "請輸入正確的金額";
    }
}



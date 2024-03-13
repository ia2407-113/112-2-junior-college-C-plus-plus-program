

#include <iostream>
using namespace std ;
int main()
{
    float money;
    cout << "輸入您的綜合所得淨額" ;
    cin >> money;
    if (money <= 560000)
        cout << "稅率為5%,應納稅金額為:" << money * 0.05 - 0;
    else if (560001 <= money <= 1260000)
        cout << "稅率為12%,應納稅金額為:" << money * 0.12 - 39200;
    else if (1260001 <= money <= 2520000)
        cout << "稅率為20%,應納稅金額為:" << money * 0.2 - 140000;
    else if (2520001 <= money <= 4720000)
        cout << "稅率為30%,應納稅金額為:" << money * 0.3 - 392000;
    else if (4720001 <= money)
        cout << "稅率為40%,應納稅金額為:" << money * 0.4 - 864000;
    else
    cout << "輸入您的綜合所得淨額";


}

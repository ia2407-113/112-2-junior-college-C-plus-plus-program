#include <iostream>
int money;
using namespace std;
int main()
{
    cout << "輸入年所得";
    cin >> money;
    if (money < 560001)
        cout << "稅率為5%,應繳納" << money * 0.05 << "元";
    else if (560000 < money < 1260001)
        cout << "稅率為12%,應繳納" << money * 0.12 - 39200 << "元";
    else if (1260000 < money < 2520001)
        cout << "稅率為20%,應繳納" << money * 0.2 - 140000 << "元";
    else if (2520000 < money < 4720001)
        cout << "稅率為30%,應繳納" << money * 0.3 - 392000 << "元";
    else if (4720000 < money)
        cout << "稅率為40%,應繳納" << money * 0.4 - 864000 << "元";
    else
        cout << "請輸入年收入";
}


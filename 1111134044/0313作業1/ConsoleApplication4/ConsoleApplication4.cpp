
#include <iostream>
using namespace std;
int main()
{
    double yearsincome ;

    cout << ("輸入您的年收所得");

    cin >> yearsincome;

    if (yearsincome <= 560000 && yearsincome >= 0)
        cout << "您應繳稅額為" << ((yearsincome * 0.05) - 0) << "稅率為5%";

    else if (yearsincome <= 1260000 && yearsincome >= 560001)
        cout << "您應繳稅額為" << ((yearsincome * 0.12) - 39200) << "稅率為12%";

    else if (yearsincome <= 2520000 && yearsincome >= 1260001)
        cout << "您應繳稅額為" << ((yearsincome * 0.2) - 140000) << "稅率為20%";

    else if (yearsincome <= 4720000 && yearsincome >= 2520001)
        cout << "您應繳稅額為" << ((yearsincome * 0.3) - 392000) << "稅率為30%";

    else if (yearsincome >=4720001)
        cout << "您應繳稅額為" << ((yearsincome * 0.4) - 864000) << "稅率為40%";

    return 0;
}



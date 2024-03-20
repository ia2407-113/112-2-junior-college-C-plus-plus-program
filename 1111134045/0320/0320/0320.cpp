
#include <iostream>
using namespace std;
int main()
{
    int a;
    double sum = 1;
    cout << "請輸入數字(小於50):";
    cin >> a;
    if (a<50)
    {
        for (double x=2;x<=a ; x++)
            sum = sum + (1 / x);
        cout << sum;
    }
    else
    {
        cout <<"輸入小於50的數字!";
    }
    
}




#include <iostream>
using namespace std;
int main()
{
    double sum=0.0 ;
    int n;
    cout << "輸入小於50的正整數n:";
    cin >> n;
    if (n <= 50)
    {
        for (int i = 1; i <= n; ++i)
        {
            sum += 1.0 / i;
        }
        cout << "1+1/2+1/3+...+1/n的和是:" << sum;
    }
    else
    {
        cout << "錯誤";
    }
}


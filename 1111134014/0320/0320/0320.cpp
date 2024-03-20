
#include <iostream>
using namespace std;

int main()
{
    double num , i ,sum;
    sum = 0;
    cout << "請輸入小於50的數字";
    cin >> num;
    if (num > 50)
        cout << "數字大於50"; 
    else
    {
        for (i = 1; i <= num; i++)//前測迴圈
       { 
        sum += (1 / i); 
       }  
    }  
    cout << "和為" << sum;
}



#include <iostream>
using namespace std;
int main()
{
    double m, kg;
    cout << "輸入身高和體重:";
    cin >> m >> kg;
    cout << "身高為" << m
         << "體重為" << kg;
    cout.precision(4);
    double BMI = kg / m / m;
    cout << "的BMI為=" << BMI;

    return 0;
}

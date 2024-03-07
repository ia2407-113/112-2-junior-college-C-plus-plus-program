#include <iostream>
using namespace std;
int main()
{
    float weight, height;
    cout << ("輸入身高(m)");
    cin >> height;
    cout << ("輸入體重(kg)");
    cin >> weight;
    cout << "BMI為" << (weight / (height * height));
    return 0;
}
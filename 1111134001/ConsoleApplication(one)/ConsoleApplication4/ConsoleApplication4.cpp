#include <iostream>

int main()
{
#include <iostream>
    using namespace std;
    int num;
    double sum = 0;
    cout << "請輸入小於50的正整數：";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        sum += 1.0 / i;
    }
    cout << "1 + 1/2  + ... + 1/" << num << "=" << sum;
    return 0;
}
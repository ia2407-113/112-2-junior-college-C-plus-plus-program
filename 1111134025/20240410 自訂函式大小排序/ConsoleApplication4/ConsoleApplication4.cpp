#include <string>
#include <iostream>
using namespace std;
void sequence(int a[]);

int main()
{
    int num[5];
    cout << "請輸入五個數字:\n";
    for (int i = 0; i <5; i++)
    {
        cin >> num[i];
    }

    sequence(num);

    for (int i = 0; i <5; i++)
    {
        cout << num[i] << " ";
    }
}

void sequence(int a[])
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

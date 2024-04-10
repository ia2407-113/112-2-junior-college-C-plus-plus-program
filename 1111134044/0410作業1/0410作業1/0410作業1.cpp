
#include <iostream>
#include <string>
using namespace std;
void bubble(int arr[], int num);

int main() {
    int size[5];

    for (int i = 0; i < 5; i++) {
        cout << "請輸入數字";
        cin >> size[i];

    }
    bubble(size, 5);
    return 0;
}

void bubble(int arr[], int size)
{
    for (unsigned int pass = 1; pass < size; ++pass)
    {
        for (int i = 0; i < size - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
    cout << "\n資料項目排列後印出\n";
    for (int g = 0; g < 5; g++)
    {
        cout << arr[g] << ' ';
    }
}
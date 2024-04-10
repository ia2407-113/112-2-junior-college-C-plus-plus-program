#include <iostream>
#include <algorithm>

using namespace std;

// 自訂函式，將整數陣列排序
void sort_increasing_order(int* numbers, int size) {
    sort(numbers, numbers + size);
}

int main() {
    const int size = 5;
    int numbers[size];

    // 輸入5個整數
    cout << "請輸入5個整數：" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "整數 " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // 呼叫自訂函式以將整數從小到大排序
    sort_increasing_order(numbers, size);

    // 輸出排序後的整數
    cout << "整數從小到大排序後為：";
    for (int i = 0; i < size; ++i) {
        cout << " " << numbers[i];
    }
    cout << endl;

    return 0;
}
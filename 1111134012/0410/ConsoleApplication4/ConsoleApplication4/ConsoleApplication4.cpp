#include <iostream>

using namespace std;
void a(int* arr, int size);
void swap(int& a, int& b);

// 用於交換兩個整數的值
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 用於將5個整數按升序排列
void a(int* arr, int size) {//*指向arr的第一個參數
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 5;
    int numbers[size];

    // 輸入5個整數
    cout << "請輸入5個整數：" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    // 呼叫函數將整數排序
    a(numbers, size);

    // 輸出排序後的整數
    cout << "排序後的整數：";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

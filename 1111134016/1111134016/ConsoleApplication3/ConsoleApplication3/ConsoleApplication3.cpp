#include <iostream>

using namespace std;

// 定義自訂函式
void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    // 定義5個整數變數
    int num1, num2, num3, num4, num5;

    // 輸入5個整數
    cout << "請輸入第1個整數:";
    cin >> num1;
    cout << "請輸入第2個整數:";
    cin >> num2;
    cout << "請輸入第3個整數:";
    cin >> num3;
    cout << "請輸入第4個整數:";
    cin >> num4;
    cout << "請輸入第5個整數:";
    cin >> num5;

    // 使用自訂函式將5個整數排序
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (num1 > num2) {
                swap(&num1, &num2);
            }
            if (num2 > num3) {
                swap(&num2, &num3);
            }
            if (num3 > num4) {
                swap(&num3, &num4);
            }
            if (num4 > num5) {
                swap(&num4, &num5);
            }
        }
    }

    // 輸出排序後的5個整數
    cout << "排序後的5個整數為:";
    cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;

    return 0;
}
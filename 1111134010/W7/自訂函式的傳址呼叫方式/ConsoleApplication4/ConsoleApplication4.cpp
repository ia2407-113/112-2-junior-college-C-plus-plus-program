#include <iostream>
#include <algorithm>
using namespace std;
void sort(int*);
void sort(int* arr) {
    // 外層迴圈遍歷整個陣列
    for (int i = 0; i < 4; i++) {
        // 內層迴圈比較和交換相鄰的元素
        for (int j = 0; j < 4; j++) {
            // 如果前一個元素大於後一個元素，則交換它們
            if (*(arr + j) > *(arr + j + 1)) {
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}

int main() {
    int arr[5];
    // 輸入5個整數
    cout << "請輸入5個整數：\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    // 使用自訂函式將整數排序
    sort(arr);
    // 輸出排序後的整數
    cout << "從小到大排序後的整數為：\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

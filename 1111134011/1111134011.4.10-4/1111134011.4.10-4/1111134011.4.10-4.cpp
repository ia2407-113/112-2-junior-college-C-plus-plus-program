// 1111134011.4.10-4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
// 自訂函式，使用傳址呼叫方式將整數陣列按升序排列
void sortArray(int* arr, int size) {
    // 使用氣泡排序法進行排序
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                // 如果相鄰兩數大小順序錯誤，則交換它們的位置
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // 提示用戶輸入 5 個整數
    cout << "請輸入5個整數:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "整數 " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // 呼叫自訂函式，按升序排列數字
    sortArray(numbers, SIZE);

    // 輸出排序後的結果
    cout << "按升序排列的整數為: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

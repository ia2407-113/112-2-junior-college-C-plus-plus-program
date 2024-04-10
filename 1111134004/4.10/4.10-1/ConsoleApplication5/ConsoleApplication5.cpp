// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void line(int*, int);  //宣告函式

int main() {
    int num[5], i;

    for (i = 0; i < 5; i++) {   //輸入五個整數
        cout << "輸入第" << i + 1 << "個整數:";
        cin >> num[i];
    }

    line(num, 5);   //呼叫函式

    cout << "從小到大排序為: ";   //輸出排序後結果
    for (i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }

    return 0;
}

void line(int* arr, int size) {   //定義函式
    int i, j, temp;

    //從小到大
    //氣泡排序
    for (i = 0; i < size - 1; i++) {   //控制迴圈經歷次數 
        for (j = 0; j < size - i - 1; j++) {   //控制迴圈每次比較次數  
            if (arr[j] > arr[j + 1]) {  //如果前面比後面大取代前面
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

// 20240410-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目一:寫一個程式，輸入5個整數，使用自訂函式的傳址呼叫方式，將5個整數從小到大輸出。

#include <iostream>
using namespace std;

void sort(int* arr, int size);
void swap(int* a, int* b);

int main()
{
	int num[5],i;
	cout << "輸入五個整數：";
	for ( i = 0; i < 5; i++)
	{
		cin >> num[i];
	}
    sort(num, 5);
    cout << "從小到大排序後的整數：";
    for (i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
void sort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
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

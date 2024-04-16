// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;
void swap(int* a, int* b); //宣告函式
void swap(int* a, int* b) //定義函式
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

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
                swap(&num1, &num2); //呼叫
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







// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

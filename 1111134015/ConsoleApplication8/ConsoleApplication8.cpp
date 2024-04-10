// ConsoleApplication8.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
// 函式原型
void sortAscending(int& a, int& b, int& c, int& d, int& e);

int main() {
    int num1, num2, num3, num4, num5;

    // 提示使用者輸入整數
  cout << "請輸入5個整數：" << endl;
  cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // 呼叫函式進行排序
    sortAscending(num1, num2, num3, num4, num5);

    // 輸出排序後的整數
    cout << "排序後的整數為：" << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;

    return 0;
}

// 自訂函式，將傳入的5個整數從小到大排序
void sortAscending(int& a, int& b, int& c, int& d, int& e) {
    int temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }
    if (d > e) {
        temp = d;
        d = e;
        e = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
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

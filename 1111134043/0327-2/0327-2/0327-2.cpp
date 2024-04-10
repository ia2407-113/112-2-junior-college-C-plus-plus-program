// 0327-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
    string str1, str2, str3, str4;
    cout << "輸入兩個身分證字號\n";
    cout << "第一位身分證字號\n";
    cin >> str1;
    cout << "第二位身分證字號\n";
    cin >> str2;

    char c1 = str1[0];
    char c2 = str2[0];

    if (c1 == 'M') {
        cout << "第一位為男性\n";
    }
    else {
        cout << "第一位為女性\n";
    }

    if (c2 == 'M') {
        cout << "第二位為男性\n";
    }
    else {
        cout << "第二位為女性\n";
    }

    str3 = str1.substr(3, 4);
    str4 = str2.substr(3, 4);

    if (str3 < str4) {
        cout << "第一位比較大\n";
    }
    else if (str3 == str4) {
        cout << "兩位一樣大\n";
    }
    else {
        cout << "第二位比較大\n";
    }

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

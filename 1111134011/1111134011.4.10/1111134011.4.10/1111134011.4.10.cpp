// 1111134011.4.10.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    getline(cin, str1);//輸入一句話英文
    int a;
    a = str1.length();//不太確定 課7-39
    for (int i = 0; i < a; i++)
    {
        str1[i] = toupper(str1[i]);//All小寫改大寫
    }
    str1[0] = tolower(str1[0]);
    for (int i = 0; i < a; i++)
    {
        if (str1[i] == ' ') //找空白
            str1[i + 1] = tolower(str1[i + 1]);//字首大寫改小寫
    }
    cout << str1;
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

// 第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "請輸入第一個身分證字號";
    getline(cin, str1);
    cout << "請輸入第二個身分證字號";
    getline(cin, str2);
    if (str1[1] == '1')
        cout << "第一位是男性\n";
    else if (str1[1] == '2')
        cout << "第一位是女性\n";
    if (str2[1] == '1')
        cout << "第二位是男性\n";
    else if (str2[1] == '2')
        cout << "第二位是女性\n";
    for (size_t i = 2; i <= 10; i++)
    {
        if (str1[i] > str2[i])
        {
            cout << "第一位可能比較小";
            break;
        }
        else if (str1[i] == str2[i])
        {

        }
        else if (str1[i] < str2[i])
        {
            cout << "第一位可能比較大";
            break;
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

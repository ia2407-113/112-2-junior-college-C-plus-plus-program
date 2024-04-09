// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string id, id2;
    int result, result2, out, outcome2, yes = 0, yes2 = 0;
    int vge, age1 = 0, age2 = 0;

    while (yes < 1)
    {
        cout << "請輸入第一個身分證號碼:";
        getline(cin, id);

        result = id.find("1", 0);
        result2 = id.find("2", 0);
        if (result == 1 or result2 == 1)
            yes = 1;
        else
        {
            cout << "!! 請輸入格式正確的身分證號碼\n";
            cout << "\n";
            continue;
        }
    }

    while (yes2 < 1)
    {
        cout << "\n";
        cout << "請輸入第二個身分證號碼:";
        getline(cin, id2);

        out = id2.find("1", 0);
        outcome2 = id2.find("2", 0);
        if (out == 1 or outcome2 == 1)
            yes2 = 1;
        else
        {
            cout << "!! 請輸入格式正確的身分證號碼\n";
            cout << "\n";
            continue;
        }
    }

    cout << "\n";
    if (result == 1)
        cout << "第一位為男士\n";
    else
        cout << "第一位為女士\n";

    if (out == 1)
        cout << "第二位為男士\n";
    else
        cout << "第二位為女士\n";
    cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        string temp = "123456789";
        vge = id.find(temp[i], 0);
        if (vge == 2)
            break;
        else
        {
            age1 += 1;
            continue;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        string temp = "123456789";
        vge = id2.find(temp[i], 0);
        if (vge == 2)
            break;
        else
        {
            age2 += 1;
            continue;
        }
    }

    if (age1 > age2)
        cout << "推算第一位比第二位年齡大";
    else
        cout << "推算第二位比第一位年齡大";
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

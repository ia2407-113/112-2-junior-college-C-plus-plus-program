// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[5], phonenumber[5], search;
    int fault = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "請輸入第" << i + 1 << "位朋友的姓名:";
        getline(cin, name[i]);
        cout << "請輸入第" << i + 1 << "位朋友的電話號碼:";
        getline(cin, phonenumber[i]);
        cout << "\n";
    }

    cout << "\n";

    while (search != "-0")
    {
        cout << "請輸入你要找的朋友的姓名(按-0結束):";
        getline(cin, search);

        if (search == "-0")
        {
            cout << "The End";
            break;
        }

        for (int i = 0; i < 5; i++)
        {
            if (search == name[i])
            {
                cout << "他的電話號碼為:" << phonenumber[i] << "\n";
                break;
            }
            fault += 1;
        }

        if (fault == 5)
            cout << "找不到這個姓名" << "\n";

        cout << "\n";
        fault = 0;
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

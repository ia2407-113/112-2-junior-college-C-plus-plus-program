// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main() 
{
    int password;
    int chuo = 0; // 錯誤次數

    do {
        cout << "請輸入三位數密碼: ";
        cin >> password;

        if (password != 123) 
        {
            cout << "密碼輸入錯誤" << endl;
            chuo ++;

            if (chuo == 3) 
            {
                cout << "暫停使用本系統!" << endl;
                return 0;
            }
        }
        else 
        {
            cout << "歡迎光臨本系統!" << endl;
            break; // 輸入正確，跳出循環
        }

    } while (true);

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

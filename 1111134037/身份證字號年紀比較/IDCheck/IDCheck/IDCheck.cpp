// IDCheck.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string sf;
    string sf2;
    string n1,n2;

    //寫一程式，輸兩個身份證字號，輸出是男性，還是女性，預估誰的年紀比較大。
    // A132004686 
    cout << "輸入10位的身份證字號";
    cin >> sf;
    
    if (sf.size() != 10)
    {
        cout << "你不是人" << "\n";
        return 0;
    }
    else if (sf[1] == '1')
    {
        cout << "男" << "\n";
    }
    else if (sf[1] == '2')
    {
        cout << "女" << "\n";
    }
    else
    {
        cout << "黑軌" << "\n";

    }
    cout << "輸入10位的身份證字號";
    cin >> sf2;
    if (sf2.size() != 10)
    {
        cout << "你不是人" << "\n";
        return 0;
    }
    else if (sf2[1] == '1')
    {
        cout << "男" << "\n";
    }
    else if (sf2[1] == '2')
    {
        cout << "女" << "\n";
    }
    else
    {
        cout << "黑軌" << "\n";

    }
    if (sf[0] == sf2[0])
    {
        string tmpsf(&sf[2], 7);
        string tmpsf2(&sf2[2], 7);
       // cout << tmpsf << "\n";

        if ( atoi(tmpsf.c_str()) > atoi(tmpsf2.c_str()) )
        {
            cout << sf2 << "年紀較大";

        }
        else if (atoi(tmpsf.c_str()) < atoi(tmpsf2.c_str()))
        {
                cout << sf << "年紀較大";

         }
        else
        {
            cout << "一樣大";
        }
    }
    else
    {
        cout << "無法比較";
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

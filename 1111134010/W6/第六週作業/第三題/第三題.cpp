// 第三題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[5], phone[5], find, a;
    for (size_t i = 0; i < 5; i++)
    {
        cout << "請輸入第" << i + 1 << "位的名字：";
        getline(cin, name[i]);

        cout << "請輸入第" << i + 1 << "位的電話：";
        getline(cin, phone[i]);
    }

    while (1)//資料輸入完後進入while迴圈，可一直重複判斷
    {
        cout << "---------我是分隔線--------\n";
        cout << "請輸入要查詢朋友的名字：\n";
        getline(cin, find);

        bool found = 0;//布林運算true / false ; 1 / 0 ; 真 / 假
        for (size_t i = 0; i < 3; i++)
        {
            if (name[i] == find)
            {
                a = phone[i];
                cout << find << "的手機號碼是" << a << endl; //end1 換行符號 "\n"
                cout << "提示：若要結束程式請輸入q\n";
                found = 1; //有找到資料將 found成真=1
                break;
            }
        }

        if (find == "q")
        {
            cout << "程式結束";
            break;
        }

        if (!found) //檢查是否找到名字，加上"!"，0->1or1->0(反向)，如果上式成立found=1，則此判斷式不成立；等於0則成立。
        {
            cout << "查無此人，請再試一次" << endl;
        }
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

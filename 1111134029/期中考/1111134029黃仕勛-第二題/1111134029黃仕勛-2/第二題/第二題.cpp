// 第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1;//第一小題
    int num[96] = { 0 };
    int i = 0;
    getline(cin, str1);
    while(str1[i]!='\0')
    {
        num[str1[i] - 32]++;
        i++;
    }
    for (int i = 32; i < 128; i++)
        if (num[i - 32] != 0)
            cout << (char)i << "出現" << num[i - 32] << "次";

    string str2, str3, id1, id2;//第二小題
    int search;
    int r = 2;
    int a = 7;
   
    
    cout << "輸入第一個身分證字號";
    getline(cin, str2);
    cout << "輸入第二個身分證字號";
    getline(cin, str3);
    id1 = str2.substr(r, a);
    id2 = str3.substr(r, a);
    search = str2.find("1");
    if (search == 1)
        cout << "第一位ID是男生\n";
    else
    {
        cout << "第一位ID是女生\n";
    }
    search = str3.find("1");
    if (search == 1)
        cout << "第二位ID是男生\n";
    else
    {
        cout << "第二位ID是女生\n";
    }
    if (id1 < id2)
        cout << str1 << "比較大\n";
    else
        cout << str2 << "比較大\n";
   
    string name[5];//第三小題
   string phone[5];
   string sername;
   for(int i=0;i<5;i++)
   {
       cout << "請輸入同學" << i + 1 << "的名字";
       getline(cin, name[i]);
       cout << "請輸入同學" << i + 1 << "的電話";
       getline(cin,phone[i]);
  }
   cout << "請輸入名字";
   getline(cin, sername);
   for(int i=0;i<5;i++)
   {
       if (sername == name[i]);
       {
           cout << sername << "的電話是" << phone[i];

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

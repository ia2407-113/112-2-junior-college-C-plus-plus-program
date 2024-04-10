// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <numbers>
#include <cctype>
using namespace std;
int main()
{
    string str1, str2, id1, id2;
    int search_result;
    int r = 2;//取第幾個字
    int a = 7;//取多少字
    cout << "請輸入第一個身份證字號:";//身分證第2碼代表性別碼：1 為男性，2為女性
    getline(cin, str1);
    cout << "請輸入第二個身份證字號:";
    getline(cin, str2);
    id1 = str1.substr(r, a);//substr是取
    id2 = str2.substr(r, a);
    search_result = str1.find("1");//第一身分證判斷  str2.find("1") 例如:B123456789  B代表0 
                                   //1代表2   3代表4  ID的男女判斷 男生第一個數字1 女生第一個數字2
    if (search_result == 1)
        cout << "第一位ID是男生\n";
    else
    {
        cout << "第一位ID是女生\n";
    }
    search_result = str2.find("1");//第二身分證判斷  str2.find("1") 例如:B123456789  B代表0 
                                   //1代表2   3代表4  ID的男女判斷 男生第一個數字1 女生第一個數字2

    if (search_result == 1)
        cout << "第二位ID是男生\n";
    else
    {
        cout << "第二位ID是女生\n";
    }
    if (id1 < id2)
        cout << str1 << "比較大\n";
    else
        cout << str2 << "比較大\n";
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

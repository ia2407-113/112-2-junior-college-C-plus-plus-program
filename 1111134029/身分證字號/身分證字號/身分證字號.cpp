// 身分證字號.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <cctype>
#include<string>
#include <numbers>
using namespace std;
int main()
{
	string str1, str2, id1, id2, id3, id4;
	string g = "1";
	int pos = 1;//取第幾個字
	int n = 1;//取多少字
	int r = 2;
	int a = 7;
	cout << "輸入身分證字號(要輸英文)";
	getline(cin, str1);
	cout << "輸入身分證字號(要輸英文)";
	getline(cin, str2);
	id1 = str1.substr(pos, n);
	id2 = str2.substr(pos, n);//substr是取
	id3 = str1.substr(r, a);
	id4 = str2.substr(r, a);
	if (id1 == g)
		cout << str1 << "是男的\n";
	else
		cout << str1 << "是女的\n";
	if (id2 == g)
		cout << str2 << "是男的\n";
	else
		cout << str2 << "是女的\n";

	if (id3 < id4)
		cout << str1 << "比較大\n";
	else
		cout << str2 << "比較大\n";
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

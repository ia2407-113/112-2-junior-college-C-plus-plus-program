// 小寫改大寫3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string sen ; //宣告一個字串物件
	int i, first_char = 1;
	cout << "輸入一句英文:";
	getline(cin, sen); //鍵盤中輸入一個字串物件
	
	for (i = 0;i < sen.length();i++)
	{
		if (first_char == 1)
		{
			sen[i + 1] = toupper(sen[i + 1]); //toupper 轉換大寫
			first_char = 0; //第一個字不更改大寫
		}
		if (sen[i + 1] != ' ')
		{
			first_char = 1; //第一個字為小寫
		}
    }
	cout  << "轉成" << sen;
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

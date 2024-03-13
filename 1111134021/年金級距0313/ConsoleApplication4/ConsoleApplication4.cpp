// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
	int level,cash,tax = 0;

	cout << "請輸入你的所得";
	cin >> cash;

	if (cash <= 560000)
	{ 
		level = 5;
		tax = cash * 0.05;
	}
	else if (cash <= 1260000 && cash >= 560001)
	{
		level = 12;
		tax = cash * 0.12 - 39200;
	}
	else if (cash <= 2520000 && cash >= 1260001)
	{
		level = 20;
		tax = cash * 0.2 - 140000;
	}
	else if (cash <= 4720000 && cash >= 2520001)
	{
		level = 30;
		tax = cash * 0.3 - 392000;
	}	
	else if (cash >= 4720001)
	{
		level = 40;
		tax = cash * 0.4 - 864000;
	}

	cout << "您的級距為" << level<<"%\n";
	cout << "您的所得稅為"<<tax;
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

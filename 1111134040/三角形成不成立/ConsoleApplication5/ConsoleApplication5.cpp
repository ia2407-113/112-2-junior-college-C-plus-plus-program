// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "輸入三角形的三個邊長(a , b , c)";
	cin >> a >> b >> c;
	if (a + b <= c)
	{
		cout << "不可構成三角形";
	}
	else if (b + c <= a)
	{
		cout << "不可構成三角形";
	}
	else if (a + c <= b)
	{
		cout << "不可構成三角形";
	}
	else
	{
		cout << "可構成三角形";
	}
}

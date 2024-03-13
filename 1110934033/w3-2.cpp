// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
		cout << "三角形邊長:";
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "可構成";
	}
	else if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "不可構成";
	}
	else {
		cout << "不可構成";
	}
	return 0;
}

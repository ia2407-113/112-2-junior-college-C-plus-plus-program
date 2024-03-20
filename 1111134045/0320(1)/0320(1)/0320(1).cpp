// 0320(1).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
	for (int x=5; x>=1; x--)
	{
		for (int a = 1; a<=((x*2)-1); a++)
		{
			cout << a;
		}
		cout << "\n";
	}
}


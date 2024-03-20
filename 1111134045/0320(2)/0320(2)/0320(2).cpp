

#include <iostream>
using namespace std;
int main()
{
	int a,count=1;
	cout << "請輸入密碼:";
	cin >> a;	
	do {
		if (a == 123)
		{
			cout << "歡迎光臨本系統!";
			count = 4;
		}
		else
		{
			cout << "密碼輸入錯誤\n";
			cout << "請輸入密碼:";
			cin >> a;
		}
		count += 1;
		if (count == 3)
		{
			cout << "暫停使用本系統!";
		}
	} while (count < 3);
}



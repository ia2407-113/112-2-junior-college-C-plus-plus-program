
#include <iostream>
using namespace std;
int main()
{
	int num = 1, password;
	do
	{
		cout << "輸入密碼:";
		cin >> password;
		if (password == 123)
		{
			cout << "密碼正確!歡迎光臨本系統~";
			break;
		}
		else
			cout << "密碼錯誤\n";
		num = num + 1;
	} while (num <= 3);
	cout << "暫停使用本系統\n";
	return  0;
}


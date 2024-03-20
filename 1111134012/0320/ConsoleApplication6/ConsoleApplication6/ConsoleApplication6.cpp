
#include <iostream>
using namespace std;
int main()
{
int pass,num=0;
int password = 123;
do {
	cout << "輸入密碼";
	cin >> pass;
	num++;
	if (pass != password) {
		cout << "密碼錯誤";

	}
	else 
	{
		cout << "歡迎光臨";
		break;
	}
	if (num>=3){
		cout << "密碼錯誤三次,系統鎖定";
		break;

	}
} while (1);
}


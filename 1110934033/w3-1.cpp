// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
	double money;
	double pay;
	std::cout << "請輸入綜合所得稅額:";
	std::cin >> money;
		if (money  <= 560000) {
			pay=money * 0.05 - 0;
			std::cout << "級距:560,001~1,260,000";
		}
		else if (money >= 560001 and money <= 1260000) {
			pay = money * 0.12 - 39200;
			std::cout << "級距:560,001~1,260,000";
		}
		else if (money >= 1260001 and money <= 2520000) {
			pay = money * 0.2 - 140000;
			std::cout << "級距:1,260,001~2,520,000";
		}
		else if (money >= 2520001 and money <= 4720000) {
			pay = money * 0.3 - 392000;
			std::cout << "級距:2,520,001~4,720,000";
		}
		else if (money < 4720001) {
			pay = money * 0.4 - 864000;
			std::cout << "4,720,001 以上";
		}

		std::cout << "應納稅額為:" << pay;
		return 0;
}



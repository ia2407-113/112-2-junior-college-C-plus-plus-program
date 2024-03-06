#include <iostream>
using namespace std;
int main()
{
	int money;
	cout << ("輸入買了多少錢:");
	cin >> money;
	cout << "獲得禮卷為" << (money / 10000) * 1000 << "元";

	return 0;
}
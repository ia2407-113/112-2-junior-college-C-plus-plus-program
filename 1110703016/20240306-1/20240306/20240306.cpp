#include <iostream>
using namespace std;
int main()
{
	int buy;
	int money = 0;
	int a = 10000;
	int b = 1000;
	cout << "購物金額:";
	cin >> buy;
	while (buy >= a) {
		money += b;
		a += 10000;
	}
	cout << "禮券金額:" << money;
	return 0;
}
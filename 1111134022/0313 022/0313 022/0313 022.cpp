#include<iostream>
using namespace std;

int main()
{
	int level,cash,x = 0;
	cout << "輸入綜合所得稅額";
	cin >> cash;
	if (cash <= 560000)
	{
		level = 5;
		x = cash * 0.05;
	}
	else if (cash <= 1260000 && cash >= 560001)
	{
		level = 12;
		x = cash * 0.12 - 39200;
	}
	else if (cash <= 2520000 && cash >= 1260001)
	{
		level = 20;
		x = cash * 0.2 - 140000;
	}
	else if (cash <= 4720000 && cash >= 2520001)
	{
		level = 30;
		x = cash * 0.3 - 392000;
	}
	else if (cash >= 4720001)
	{
		level = 40;
		x = cash * 0.4 - 864000;
	}
	cout << "應納稅額為" << x << "元\n";

	cout << "級距" << level << "%";
	return 0;




}


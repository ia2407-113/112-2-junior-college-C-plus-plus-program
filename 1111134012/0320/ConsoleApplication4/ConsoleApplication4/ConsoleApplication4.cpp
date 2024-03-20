
#include <iostream>
using namespace std;
int main()
{
	double total=0 , number;
	cout << "輸入小於50的正整數";
	cin >> number;
	for (double i = 1; i <= number; i += 1)
		total += (1 / i);
	cout << "和為:" << total;
}




#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <=9; i++)//直行的計算
	{
		for (int j = 1; j <= 9-(i-1)*2 ; j++)//橫列的計算 
		{
			cout << j;
		}
		cout << "\n";
	}
	return 0;
}

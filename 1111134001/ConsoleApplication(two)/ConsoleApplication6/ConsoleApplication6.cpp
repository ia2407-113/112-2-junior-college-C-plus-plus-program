

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 9; a >= 1; a = a - 2)
	{
		for(b=1;b<=a;b++)
		{
			cout << b;
		}
		cout << "\n";
	}
	return 0;
}


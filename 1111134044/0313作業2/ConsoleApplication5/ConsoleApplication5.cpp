
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "輸入邊長abc  ";
	cin >> a >> b >> c;
	if ((a + b) <= c)
		cout << "這三邊長無法成為三角形";

	else if ((a + c) <= b)
		cout << "這三邊長無法成為三角形";

	else if ((b + c) <= a)
		cout << "這三邊長無法成為三角形";

	else 
		cout << "可成一組三角形";
	return 0;
}


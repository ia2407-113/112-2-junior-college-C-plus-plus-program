#include <iostream>
using namespace std;
int main()
{
	double kg, m;
	cout << "輸入體重(kg)與身高(m)(以空格隔開):";
	cin >> kg >> m;
	cout << "BMI為" << kg/(m * m);

	return 0;
}


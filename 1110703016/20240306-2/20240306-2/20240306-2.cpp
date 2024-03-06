#include <iostream>
using namespace std;
int main()
{
	float m, bmi;
	int kg;
	cout << "身高體重:";
	cin >> m >> kg;
	bmi = kg / (m * m);
	cout << "BMI:" << bmi;
	return 0;
}
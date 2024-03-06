#include <iostream>
using namespace std;
int main()
{
	float kg, m, Bmi;
	cout << "輸入體重:";
	cin >> kg;
	cout << "輸入身高(公尺為單位):";
	cin >> m;
	cout << "Bmi為" << (kg / (m * m));
	return 0;


}
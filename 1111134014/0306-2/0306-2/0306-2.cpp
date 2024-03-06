#include <iostream>
using namespace std;

int main()
{
	float kg, m, bmi;  
	cout << "輸入您的體重(公斤為單位)";
	cin >> kg;
	cout << "輸入您的身高(公尺為單位)";
	cin >> m;
	cout << "您的體重為" << kg << ",身高為" << m
		<< "BMI為\t" << kg / (m * m);
	return 0;
}
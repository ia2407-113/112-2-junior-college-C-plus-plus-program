#include <iostream>
using namespace std;

int main()
{
	int buy;  
	cout << "輸入您的購買金額";
	cin >> buy;
	cout << "您獲得的禮金金額為" << (buy / 10000)*1000 << "元";

	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int a,b,c = 0;
	cout << "輸入三角形的邊(空格隔開)";
	cin >> a >> b >> c;
	if (a + b <= c)
	{
		cout << "無法構成一個三角形";
	}
	else if (a + c <= b)
	{
		cout << "無法構成一個三角形";
	}
	else if (b + c <= a)
	{
		cout << "無法構成一個三角形";
	}
	else {
		cout << "可以構成一個三角形";
	}


	

}


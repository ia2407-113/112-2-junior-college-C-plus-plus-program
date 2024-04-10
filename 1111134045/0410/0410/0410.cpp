#include <string>
#include <iostream>
using namespace std;
void sequence(int a[]);

int main()
{
	int num[5];
	cout << "請輸入五個數字:\n";
	for (int i = 0; i <= 4; i++)
	{
		cin >> num[i];
	}
	sequence(num);
	for (int i = 0; i <= 4; i++)
	{
		cout << num[i] << " ";
	}	
}
void sequence(int a[])
{
	int temp;
	for (int x = 0; x < 4; x++)
	{
		for (int i = 0; i <= 3; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
	
}


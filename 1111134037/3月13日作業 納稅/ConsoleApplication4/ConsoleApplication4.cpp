// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
struct s1
{
	int toincl;
	float lau;
	int lajin;
	int solu;
}chian[6];
int main()
{
	s1 chian[6];
	chian[0].toincl = 0;
	chian[0].lau = 0;
	chian[0].lajin = 0;
	chian[1].toincl = 560000;
	chian[2].toincl = 1260000;
	chian[3].toincl = 2520000;
	chian[4].toincl = 4720000;
	chian[5].toincl = 4720001;
	chian[1].lau = 0.05;
	chian[2].lau = 0.12;
	chian[3].lau = 0.2;
	chian[4].lau = 0.3;
	chian[5].lau = 0.4;
	chian[1].lajin = 0;
	chian[2].lajin = 39200;
	chian[3].lajin = 140000;
	chian[4].lajin = 392000;
	chian[5].lajin = 864000;
	chian[0].solu = 0;
	int i = 0;
								
		cout << "輸入總和所得淨額" << "\n";
		cin >> chian[0].solu;
		for (i = 0; i < 6; i++) 
		{
			if (chian[0].solu >= chian[5].toincl)
			{
				chian[0].solu = chian[0].solu * chian[5].lau - chian[5].lajin;
				break;
			}		
			else if ((chian[0].solu > chian[i].toincl +1) && (chian[0].solu <= chian[i+1].toincl))
			{

			chian[0].solu = chian[0].solu * chian[i+1].lau - chian[i+1].lajin;
			}
		}
		cout << chian[0].solu;
	
	return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

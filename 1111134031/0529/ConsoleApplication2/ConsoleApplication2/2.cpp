﻿// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include"volume.h"	
#include<string>
using namespace std;


/*class shape
{
public:
	string name;
	double result;
	void area()
	{
		cout << result << endl;
	}
};

class rectangle:public shape
{
public:
	double length, width;
	void data_input()
	{
		name = "長方形";
		cout << "\t計算" << name << "的面積\n";
		cout << "輸入" << name << "的長\n";
		cin >> length;
		cout << "輸入" << name << "的寬\n";
		cin >> width;
		result = length * width;
		cout << "面積";
	}
	
};

class cube :public rectangle
{
public:
	double height;
	void data_input()
	{
		name = "長方體";
		cout << "\t計算" << name << "的面積\n";
		cout << "輸入" << name << "的長:";
		cin >> length;
		cout << "輸入" << name << "的寬:";
		cin >> width;
		cout << "輸入" << name << "的高:";
		cin >> height;
		result = length * width* height;
		cout << "體積";
	}

};
*/

int main()
{
	cube volume;
	volume.rectangle::data_input();
	volume.area();
	volume.data_input();
	volume.area();
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
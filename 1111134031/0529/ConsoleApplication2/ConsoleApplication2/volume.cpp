#include <iostream>
#include<string>
#include"volume.h"	
using namespace std;



	void shape::area()
	{
		cout << result << endl;
	}



	void rectangle::data_input()
	{
		name = "長方形";
		cout << "\t計算" << name << "的面積\n";
		cout << "輸入" << name << "的長\n";
		cin >> length;
		cout << "輸入" << name << "的寬\n";
		cin >> width;
		result = length * width;
		cout << "面積";
	};


	void cube::data_input()
	{
		name = "長方體";
		cout << "\t計算" << name << "的面積\n";
		cout << "輸入" << name << "的長:";
		cin >> length;
		cout << "輸入" << name << "的寬:";
		cin >> width;
		cout << "輸入" << name << "的高:";
		cin >> height;
		result = length * width * height;
		cout << "體積";
	}


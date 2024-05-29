#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
class shape
{
public:
	string name;
	double result;
	void area();//特結果印出
};
class rectangle : public shape
{
public:
	double length, width;
		//長方體積的類別
	void data_input();
};
class cube :public rectangle
{
public:
	double height;

	void data_input();
};

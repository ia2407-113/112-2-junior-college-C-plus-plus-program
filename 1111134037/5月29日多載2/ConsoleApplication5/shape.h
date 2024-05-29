#pragma once
#include <iostream>
#include <string>
using namespace std;
class shape
{
public:

	string name = "";
	double result = 0 ;
	void area();


};

class rectangle : public shape
{
public:
	double length = 0;
	double width = 0;
	void datainput();

};
class cube :public rectangle 
{
public:
	double hieght = 0;
	void datainput();
};

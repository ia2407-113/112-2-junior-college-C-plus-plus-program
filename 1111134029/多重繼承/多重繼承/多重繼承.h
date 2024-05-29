#pragma once
#include <iostream>
#include <string>
using namespace std;
class shape
{
public:
	string name;
	double result;

	void area();
};
class rectangle : public shape
{
public:
	double length, width;
	void data_input(); //輸入長、寬,並將面積放入result中
};
//長方體積的類別
class cube : public rectangle
{
public:
	double height;
	void data_input();//輸入長、寬、高,並將體積放入result中
};


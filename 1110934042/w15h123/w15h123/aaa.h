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

class rectangle :public shape
{
public:
	double l, w;
	void data_input();
};

class cube :public rectangle
{
public:
	double h;
	void data_input();
};


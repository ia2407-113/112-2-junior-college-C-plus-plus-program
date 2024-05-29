#pragma once

#include <iostream>
#include <string>
using namespace std;

class shape
{
public:
	string name;
	double result;
	void area();//µ²ªG¦L¥X
};

class rectangle :public shape {
public:
	double length, width;
	void datainput();
};

class cube :public rectangle {
public:
	double height;
	void datainput();
};
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
	void data_input(); //��J���B�e,�ñN���n��Jresult��
};
//������n�����O
class cube : public rectangle
{
public:
	double height;
	void data_input();//��J���B�e�B��,�ñN��n��Jresult��
};


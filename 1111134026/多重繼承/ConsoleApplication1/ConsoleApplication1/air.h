
#include <iostream>
#include <string>
using namespace std;

class shape
{
public:
	string name;
	double result;

	void area();//�L�X���G
};

//���� ��
class rectangle :public shape
{
public:
	double lenght, width;

	void data_input();
};

class cube :public rectangle
{
public:
	double height;

	void data_input();
};


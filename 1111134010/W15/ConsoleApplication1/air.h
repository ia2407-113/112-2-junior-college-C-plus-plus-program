#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 
class shape
{
public:
	string name;
	double result;
	void area();//�S���G�L�X
};
class rectangle : public shape
{
public:
	double length, width;
		//������n�����O
	void data_input();
};
class cube :public rectangle
{
public:
	double height;

	void data_input();
};

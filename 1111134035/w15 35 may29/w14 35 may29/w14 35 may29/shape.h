#include <iostream>
#include <string>
using namespace std;
class shape
{
public:
    string name; // ���檫�W�� 
    double result;    // ���檫�s�� 
    void area();
};
class rectangle :public shape
{

public:
    double length, width;
    void data_input();
};
class cube :public rectangle
{

public:
    double height;
    void data_input();
};
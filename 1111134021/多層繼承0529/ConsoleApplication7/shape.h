#include <iostream>
#include <string>
using namespace std;

class shape
{
public:
    string name;
    double shape_area;
    void area();
};

class rectangle :public shape
{
public:
    double length;
    double width;
    void data_input();
};

class cube :public rectangle
{
public:
    double height;
    void data_input();
};
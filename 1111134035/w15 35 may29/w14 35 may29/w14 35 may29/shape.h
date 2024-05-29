#include <iostream>
#include <string>
using namespace std;
class shape
{
public:
    string name; // 飛行物名稱 
    double result;    // 飛行物編號 
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

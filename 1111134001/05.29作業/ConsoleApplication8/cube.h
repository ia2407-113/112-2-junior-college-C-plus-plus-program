#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace std;
// 飛行物體類別 
class shape
{
public:
    string name;  // 飛行物名稱 
    double result;

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
#pragma once
// Time.h  Time class 
#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

using namespace std;

class Time {
public:
    Time(int h, int m); //�غc�l
    void setTime(int h, int m);  //�]�m�ɶ�
    void printTime() const; //��X�ɶ�
private:
    int hours;
    int minutes;
};
#endif 

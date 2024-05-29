#pragma once
// Time.h  Time class 
#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

using namespace std;

class Time {
public:
    Time(int h, int m); //建構子
    void setTime(int h, int m);  //設置時間
    void printTime() const; //輸出時間
private:
    int hours;
    int minutes;
};
#endif 

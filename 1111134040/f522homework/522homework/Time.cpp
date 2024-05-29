//Time.cpp Time class 
#include <iostream>
#include <sstream>
#include "Time.h"

using namespace std;

Time::Time(int h, int m) {
    setTime(h, m);
}

void Time::setTime(int h, int m) {
    hours = (h >= 0 && h < 24) ? h : 0; // 檢查小時是否在合法範圍內，否則設為 0
    minutes = (m >= 0 && m < 60) ? m : 0; // 檢查分鐘是否在合法範圍內，否則設為 0
}  // ?:如果(h >= 0 && h < 24)成立，則整個表達式的值為h否則為0

void Time::printTime() const {
    cout << ((hours < 10) ? "0" : "") << hours << ":" // 如果小時是個位數，補零
        << ((minutes < 10) ? "0" : "") << minutes; // 如果分鐘是個位數，補零
}   // ?:如果(hours < 10)成立，則整個表達式的值為補0否則為空字串
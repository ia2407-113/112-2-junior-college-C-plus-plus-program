#include <iostream>
#include <iomanip>
#include <stdexcept> 
#include "Time.h"

using namespace std;

Time::Time(int h, int min, int s)
{
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");

    if (min >= 0 && min < 60)
        minute = min;
    else
        throw invalid_argument("minute must be 0-59");

    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");

    cout << "Time object constructor for time ";
    printtime();
}

void Time::printtime() const
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second <<endl;
} 

Time::~Time()
{
    cout << "Time object destructor for time" << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second << endl;
}
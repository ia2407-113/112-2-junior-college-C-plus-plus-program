#include <array>
#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int hr, int min, int sec)
{
    if (hr >= 0 && hr < hoursOfDay) 
       hour = hr;
    else
        throw invalid_argument("hour must be 0-23");

    if (min >= 0 && min <minutesOfHour)
        minute = min;
    else
        throw invalid_argument("minute must be 0-59");

    if (sec >= 0 && sec < secondsOfMinute)
        second = sec;
    else
        throw invalid_argument("second must be 0-59");
 
    cout << "Time object constructor for time ";
    show();
    cout << endl;
} 

// print Date object in form month/day/year
void Time::show() const
{
    cout << hour << "ÂI:" << minute << "¤À:" << second<<"¬í";
} // end function print

Time::~Time()
{
    cout << "Time object destructor for time ";
    show();
    cout << endl;
} 
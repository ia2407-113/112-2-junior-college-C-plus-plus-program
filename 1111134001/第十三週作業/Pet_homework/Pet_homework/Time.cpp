// print Time in universal-time format (HH:MM:SS)
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Time.h"

using namespace std;

Time::Time(int h, int min, int s)
{
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");

    if(min>=0 && min<60)
        minute = min;
    else
        throw invalid_argument("minute must be 0-59");
    
    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");

    cout << "Time object constructor for time ";
    printtime();
    //printtime();
    // output Date object to show when its constructor is called
} // end Date constructor

void Time::printtime() const
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second <<endl;
} // end function printUniversal
// print Time in standard-time format (HH:MM:SS AM or PM)

Time::~Time()
{
    cout << "Time object destructor for time" << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second << endl;
}
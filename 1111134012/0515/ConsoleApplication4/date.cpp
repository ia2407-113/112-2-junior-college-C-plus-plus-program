#include <array>
#include <iostream>
#include <stdexcept>
#include "date.h"
using namespace std;


Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear) 
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    year = yr; 
    day = checkDay(dy); 


    cout << "Date object constructor for date ";
    print();
    printROC();
    cout << endl;
}


void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

void Date::printROC() const
{
    cout << "民國" << year - 1911 << "年" << month << "月" << day << "日";
}


Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
} 
unsigned int Date::checkDay(int testDay) const
{
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
} 
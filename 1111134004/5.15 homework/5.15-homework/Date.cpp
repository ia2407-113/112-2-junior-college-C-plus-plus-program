//Date.cpp  Date class 
#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" 

using namespace std;

Date::Date(int mn, int dy, int yr)  //建構子
{
    if (mn > 0 && mn <= monthsPerYear) //檢查月份
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    year = yr; 

    day = checkDay(dy);  //檢查日期

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
    cout << "民國" << year - 1911 << "年" << month << "月" << day << "日" << endl;
} 

Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
} 

unsigned int Date::checkDay(int testDay) const
{
    //array儲存每個月份的天數
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    //檢查日期大於0且小於等於當月的天數
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // 特殊情況:二月閨年
    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year"); //不符合規定
} 
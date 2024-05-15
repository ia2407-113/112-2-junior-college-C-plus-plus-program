// 0515-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear) // validate the month
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    year = yr; // could validate yr
    day = checkDay(dy); // validate the day

    // output Date object to show when its constructor is called
    cout << "Date object constructor for date ";
    print();
    printROC();
    cout << endl;
} // end Date constructor

// print Date object in form month/day/year
void Date::print() const
{
    cout << month << '/' << day << '/' << year<< " ";
} // end function print

void Date::printROC() const
{
    cout << "民國" << year - 1911 << '/' << month << '/' << day;
}

// output Date object to show when its destructor is called
Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    printROC();
    cout << endl;
} // end ~Date destructor

// utility function to confirm proper day value based on 
// month and year; handles leap years, too
unsigned int Date::checkDay(int testDay) const
{
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // determine whether testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // February 29 check for leap year 
    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
} // end function checkDay

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

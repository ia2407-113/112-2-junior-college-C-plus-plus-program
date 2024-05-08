#include <iostream>
#include "gradebook.h"
using namespace std;
//建構子
GradeBook::GradeBook(string initial_name)
{
    course_name = initial_name;
}

// 解構子
GradeBook::~GradeBook()
{
    cout << "Bye Bye my course!" << endl;
}

// 顯示歡迎訊息和課程名稱的成員函式
void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
} // end function displayMessage

// 設置課程名稱的成員函式
void GradeBook::setCourse(string name)
{
    // 如果name不為空字串，則設置course_name
    if (name != "")
        course_name = name;
}

// 獲取課程名稱的成員函式
string GradeBook::getCourse()
{
    return course_name;
}

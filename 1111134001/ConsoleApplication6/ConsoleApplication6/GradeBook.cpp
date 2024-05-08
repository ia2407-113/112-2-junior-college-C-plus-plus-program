#include <iostream>
#include "GradeBook.h"

using namespace std;
GradeBook::GradeBook(string initial_name)
{
    course_name = initial_name;
}
GradeBook::~GradeBook()
{
    cout << "Bye Bye my course!" << endl;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
}
void GradeBook::setCourse(string name)
{
    if (name != "")
        course_name = name;
}
string  GradeBook::getCourse()
{
    return course_name;
}
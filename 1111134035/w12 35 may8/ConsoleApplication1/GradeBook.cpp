#include <iostream>
#include "GradeBook.h"
using namespace std;
GradeBook::GradeBook(string a_course)
{
    course_name = a_course;
}
GradeBook::~GradeBook()
{
    cout << "end";
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
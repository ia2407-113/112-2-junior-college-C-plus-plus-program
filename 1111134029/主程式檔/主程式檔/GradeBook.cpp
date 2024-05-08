#include <iostream>
#include"GradeBook.h"
using namespace std;
GradeBook::GradeBook(string in)
{
    course_name = in;
}
GradeBook::~GradeBook()
{
    cout << "HAHA" << endl;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
} // end function displayMessage

void GradeBook:: setCourse(string name)
{
    if (name != "")
        course_name = name;
}
#include <iostream>
#include "GradeBook.h"
using namespace std;
GradeBook::GradeBook(string intal_name)
{
    course_name = intal_name;
}
GradeBook::~GradeBook()
{
    cout << "bye bye" << endl;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
} // end function displayMessage

void GradeBook::setCourse(string name)
{
    if (name != "")
        course_name = name;
}
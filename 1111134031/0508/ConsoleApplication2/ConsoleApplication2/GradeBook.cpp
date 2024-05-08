#include <iostream>
#include"GradeBook.h"
using namespace std; 
GradeBook::GradeBook(string abc_name)
{
    course_name = abc_name;
}

GradeBook::~GradeBook()
{
    cout << "bye bye";
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
string GradeBook::getCourse()
{
    return course_name;
}


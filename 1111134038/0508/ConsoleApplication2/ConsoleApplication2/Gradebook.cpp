#include <iostream>
#include"Gradebook.h"
using namespace std;
GradeBook::GradeBook(string initial_name)
{
    course_name = initial_name;
}
GradeBook::~GradeBook()
{
    cout << "Bye Bye course";
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

string GradeBook::getcourse()
{
    return course_name;
}
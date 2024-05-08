#include <iostream>
#include"GradeBook.h"

using namespace std;

GradeBook::GradeBook(string initial_name)
{
    course_name = initial_name;
}

// Destructor
GradeBook::~GradeBook()
{
    cout << "bye bye my course" << endl;
}

// function that displays a welcome message to the GradeBook user
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
string GradeBook::getCourse(string name)
{
    return course_name;
}

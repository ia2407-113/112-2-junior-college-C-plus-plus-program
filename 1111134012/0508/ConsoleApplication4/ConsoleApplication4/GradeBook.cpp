#include "Gradebook.h"
using namespace std;
#include <iostream>



GradeBook:: GradeBook(string init_name) {
    course_name = init_name;
}
GradeBook::~GradeBook() {
    cout << "µ²§ô" << endl;
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
string GradeBook::getCourse() {
    return course_name;
}
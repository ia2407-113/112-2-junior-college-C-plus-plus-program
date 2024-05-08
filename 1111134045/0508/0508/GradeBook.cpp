#include <iostream>
#include "GradeBook.h"

using namespace std;
    // function that displays a welcome message to the GradeBook user
    GradeBook::GradeBook(string initial_course)
    {
        course_name = initial_course;
        cout << course_name << "\n";
    }
    GradeBook::~GradeBook()
    {
        cout << "end";
    }
    void GradeBook::displayMessage() const
    {
        cout << courseID << endl;
        cout << teacher << endl;
    }

    void GradeBook::setCourseID(string name)
    {
        if (name != "")
            courseID = name;
    }
    void GradeBook::setCourseTeacher(string name)
    {
        if (name != "")
            teacher = name;
    }
    string GradeBook:: getCourseID()
    {
        return courseID;
    }
    string GradeBook:: getCourseTeacher()
    {
        return teacher;
    }

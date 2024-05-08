#include<iostream>
#include"Gradebook.h"
using namespace std;


    GradeBook::GradeBook(string inital_course)
    {
        course_name = inital_course;
    }

    GradeBook::~GradeBook()
    {
        cout << "owarida";
    }

    void  GradeBook::displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
    }

    void  GradeBook::setCourse(string name)
    {
        if (name != "")
            course_name = name;
    }
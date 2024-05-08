#pragma once
#include <iostream>
using namespace std;

class GradeBook
{
public:
    // Public constructor
    GradeBook(string st);

    // Destructor
    ~GradeBook();

    // Public member function to display a message
    void displayMessage() const;

    // Public member function to set the course name
    void setCourse(string name);
    string getCourse();

private:
    string course_name = "Computer Networks";
};

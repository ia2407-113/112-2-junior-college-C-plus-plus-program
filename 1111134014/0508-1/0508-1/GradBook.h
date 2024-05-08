#pragma once
#include <iostream>
//º–¿Y¿…
using namespace std;

class GradeBook
{
public:
    // Constructor with default parameter to initialize course name
    GradeBook(string initial_name);
    ~GradeBook();
    void displayMessage() const;
    void setCourse(string name);
    string getCourse(string name);
private:
    string course_name;
};
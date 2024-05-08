#pragma once
#include <iostream>
using namespace std;
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    GradeBook(string intal_name);
    ~GradeBook();
    void displayMessage() const;
    void setCourse(string name);
    string getCourse();
private:
    string course_name ;
};
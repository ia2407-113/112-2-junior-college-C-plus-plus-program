#pragma once
#include <iostream>
using namespace std;
class GradeBook
{
public:
    GradeBook(string in);
    ~GradeBook();
    void displayMessage() const;
    void setCourse(string name);
private:
    string course_name = "Computer Networks";
}; 
#pragma once
#include <iostream>
using namespace std;

class GradeBook
{
public:
    GradeBook(string intal_name);

    void displayMessage() const;

    void setCourse(string name);

    ~GradeBook();

    string getCourse();
private:
    string course_name ;
};

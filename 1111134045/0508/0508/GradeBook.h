#pragma once
#include <iostream>
using namespace std;

class GradeBook
{
public:
GradeBook(string initial_course);
~GradeBook();
void displayMessage() const;
void setCourseID(string name);
void setCourseTeacher(string name);
string getCourseID();
string getCourseTeacher();
private:
string courseID = "unalterID";
string teacher = "unalterTC";
string course_name;
};
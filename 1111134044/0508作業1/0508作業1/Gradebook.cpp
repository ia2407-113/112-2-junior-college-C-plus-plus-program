#include<iostream>
#include"Gradebook.h"
using namespace std;

GradeBook::GradeBook(string nmsl_name)
{
    course_name = nmsl_name;

}
GradeBook:: ~GradeBook()
{
    cout << "bye bye mycourse" << endl;
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
string GradeBook::getcourse()
{
    return course_name;
 }
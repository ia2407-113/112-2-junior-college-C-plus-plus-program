#include <iostream>
#include "Header.h"
using namespace std;
GradeBook::GradeBook(string initial_name)
{
	course_name = initial_name;
}

GradeBook::~GradeBook()
{
	cout << "Bye Bye my Course!" << endl;
}

void GradeBook::displayMessage()const
{
	cout << "Welcome to the Grade Book" << endl;
	cout << "Course Nmae is:" << course_name << endl;
}
void GradeBook::setcourse(string name)
{
	if (name != "")
		course_name = name;
}
string GradeBook::getcourse()
{
	return course_name;
}
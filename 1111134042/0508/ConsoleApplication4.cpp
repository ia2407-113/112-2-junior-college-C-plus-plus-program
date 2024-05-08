#include <iostream>
#include"gradebook.h"
using namespace std;

Gradebook::Gradebook(string inital_course)
{
	course_name = inital_course;
}

Gradebook::~Gradebook()
{
	cout << "owarida";
}

void Gradebook::displayMessage() const
{
	cout << "Welcome to the Grade book!" << endl;
	cout << "Course Name is:" << course_name << endl;
}

void Gradebook::setCourse(string name)
{
	if (name != "")
		course_name = name;
}
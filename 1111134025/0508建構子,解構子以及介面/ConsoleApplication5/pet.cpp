#include<iostream>
#include"GradeBook.h"
using namespace std;

GradeBook::GradeBook(string in_name) {
	course_name = in_name;
}

GradeBook::~GradeBook() {
	cout << "µ²§ô" << endl;
}

void GradeBook::displayMessage() const {
	cout << "½Òµ{: " << course_name << endl;
}

void GradeBook::setCourse(string name)
{
	if (name != "")
		course_name = name;
}

string GradeBook::getCourse() {
	return course_name;
}
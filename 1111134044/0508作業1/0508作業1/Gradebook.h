#pragma once
#include <iostream>
using namespace std;

class GradeBook
{
public:
	GradeBook(string nmsl_name);
	~GradeBook();
	void displayMessage() const;
	void setCourse(string name);
	string getcourse();
private:
	string course_name ;
};

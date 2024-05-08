#pragma once
#include <iostream>
using namespace std;

class GradeBook
{
    public:
	GradeBook(string abc_name);
	~GradeBook();
	void displayMessage() const;
	void setCourse(string name);
	string getCourse();
	private:
	string course_name;
};
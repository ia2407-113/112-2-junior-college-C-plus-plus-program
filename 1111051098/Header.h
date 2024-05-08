#pragma once
#include<iostream>
using namespace std;
class GradeBook
{
public:
	GradeBook(string inital_name);
	~GradeBook();
	void displayMessage()const;
	void setcourse(string name);
	string getcourse();
private:
	string course_name;
};
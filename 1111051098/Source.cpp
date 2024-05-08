#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	GradeBook myGradeBook("Course name is unknown!");
	myGradeBook.displayMessage();
	myGradeBook.setcourse("C++ programming");
	myGradeBook.displayMessage();
}
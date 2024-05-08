#include<iostream>
#include"GradeBook.h"

using namespace std;
int main()
{
    GradeBook myGradeBook("Course Name is unknown"); // create a GradeBook object named myGradeBook with course name
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
} // end main  
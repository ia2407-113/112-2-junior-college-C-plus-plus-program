#include <iostream>

#include"GradeBook.h"
using namespace std;

// function main begins program execution
int main()
{
    GradeBook myGradeBook("Course name is unkown"); // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("C++ programming");
    //myGradeBook.course_name = "I don't know!";
    myGradeBook.displayMessage();
} // end main
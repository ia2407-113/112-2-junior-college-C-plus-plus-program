#include <iostream>
#include "GradeBook.h"

// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition


// function main begins program execution
int main()
{
    GradeBook myGradeBook("Chinese"); // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("C++ programming");
    //myGradeBook.course_name = "I don't know!";
    myGradeBook.displayMessage();
} // end main
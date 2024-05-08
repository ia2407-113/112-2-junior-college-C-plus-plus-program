// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include "course.h"


// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition


// function main begins program execution
int main()
{
    course ss;
   // create a GradeBook object named myGradeBook
    ss.displayMessage(); // call object's displayMessage function 
    ss.setCourse("C++ programming");
    //myGradeBook.course_name = "I don't know!";
    ss.displayMessage();
    ss.setCourseID("456");
    ss.setCourseTeacher("def");
    cout << ss.getCourseID() << endl;
    cout << ss.getCourseTeacher();
} // end main
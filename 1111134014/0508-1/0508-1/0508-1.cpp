#include <iostream>
#include"GradBook.h"

using namespace std;

// function main begins program execution
int main()
{
    GradeBook myGradeBook("unknow"); // create a GradeBook object named myGradeBook with specified course name
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();

} // end main

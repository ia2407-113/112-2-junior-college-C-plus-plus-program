#include <iostream>
#include "GradeBook.h"

using namespace std;

// Main function
int main()
{
    GradeBook myGradeBook("程式設計"); // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("數學");
    myGradeBook.displayMessage();
    myGradeBook.setCourse("國文");
    myGradeBook.displayMessage();
    myGradeBook.setCourse("英文");
    myGradeBook.displayMessage();
    return 0;
}

#include <iostream>
#include "GradeBooK.h"

using namespace std;

int main()
{
    GradeBook myGradeBook("English");
    myGradeBook.displayMessage();
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
}
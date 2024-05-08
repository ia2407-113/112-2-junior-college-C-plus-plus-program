#include <iostream>
#include "Gradebook.h"
using namespace std;

int main()
{
    GradeBook myGradeBook("nmsl");
    myGradeBook.displayMessage();
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
}
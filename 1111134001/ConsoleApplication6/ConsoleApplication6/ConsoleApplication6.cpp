#include <iostream>
#include "GradeBook.h"

using namespace std;//輸入/輸出
int main()
{
    GradeBook myGradeBook("Course name is unknown!");
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
}

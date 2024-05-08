#include <iostream>
using namespace std;
#include "Gradebook.h"

int main()
{
    GradeBook myGradeBook("unknown");     // 創建一個名為 myGradeBook 的 GradeBook 物件，課程名稱為 "unknown"
    myGradeBook.displayMessage(); 
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
    return 0;
} // end main

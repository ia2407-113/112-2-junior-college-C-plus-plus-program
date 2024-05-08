#include <iostream>
#include"GradeBook.h"  //使用 GradeBook 類別定義
using namespace std;

int main()
{
    GradeBook myGradeBook("Course name unknow"); //初始化
    myGradeBook.displayMessage(); //顯示歡迎訊息和當前課程名稱
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
    return 0;
} 
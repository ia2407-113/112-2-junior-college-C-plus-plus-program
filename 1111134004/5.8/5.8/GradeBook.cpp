//實作檔
#include<iostream>
#include"GradeBook.h"

//在類別中定義了靜態成員（變數或函式）時，可以使用 :: 來表示該類別的作用域
using namespace std;
GradeBook::GradeBook(string initial_name) {   //建構子
    course_name = initial_name;   //初始化課程名稱
}
GradeBook::~GradeBook()     //解構子
{
    cout << "Bye Bye" << endl;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
}
void GradeBook::setCourse(string name)
{
    if (name != "")
        course_name = name;  //設置為課程名稱
}
string GradeBook::getCourse() {
    return course_name;  //返回課程名稱的字符串
}

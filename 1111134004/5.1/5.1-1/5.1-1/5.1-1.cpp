#include <iostream>

// Fig. 3.1: fig03_01.cpp
// 定義一個名為 GradeBook 的類別，其中包含一個成員函式 displayMessage；
// 創建一個 GradeBook 物件並呼叫其 displayMessage 函式
using namespace std;

// GradeBook 類別定義
class GradeBook
{
public:
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
        cout << "ID名稱: " << CourseID << endl;
        cout << "老師名稱: " << Teacher << endl;
    } // displayMessage 函式結束

    // 設定課程名稱的函式
    void setCourse(string name) //如果輸入的課程名稱不是空的，則會將其設定為course_name
    {
        if (name != "")
            course_name = name;
    }
    void setCourseID(string name) //如果輸入的課程名稱不是空的，則會將其設定為setCourseID
    {
        if (name != "")
            CourseID = name;
    }
    void setCourseTeacher(string name) //如果輸入的課程名稱不是空的，則會將其設定為setCourseTeacher
    {
        if (name != "")
            Teacher = name;
    }
    string getCourse() 
    {
        return course_name;
    }
    string getCourseID() 
    {
        return CourseID;
    }
    string getCourseTeacher() 
    {
        return Teacher;
    }
private:
    string Teacher = "David";
    string CourseID = "36594";
    string course_name = "Computer Networks";
}; // GradeBook 類別結束  

// main 函式開始執行程式
int main()
{
    GradeBook myGradeBook;  // 創建一個名為 myGradeBook 的 GradeBook 物件
    myGradeBook.displayMessage(); // 呼叫物件的 displayMessage 函式 
    myGradeBook.setCourse("C++ programming");
    myGradeBook.setCourseID("593448");
    myGradeBook.setCourseTeacher("Ray");
    myGradeBook.displayMessage();
    //cout << "ID名稱:" << myGradeBook.getCourseID() << "\n";
    //cout << "老師名稱:" << myGradeBook.getCourseTeacher() << "\n";
}
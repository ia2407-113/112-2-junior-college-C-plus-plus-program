#include <iostream>
#include <string> 
using namespace std;


class GradeBook// GradeBook 類別的定義
{
public: //公用
    
    void displayMessage() const// 函數顯示歡迎訊息給 GradeBook 使用者
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
        cout << "Course ID is: " << course_id << endl;
        cout << "Teacher is: " << teacher << endl;
    } 

    void setCourse(string name)
    {
        if (name != "")
            course_name = name;
    }
    void setCourseID(string id)
    {
        if (id != "")
            course_id = id;
    }
    void setTeacher(string t)
    {
        if (t != "")
            teacher = t;
    }
    string getcourse()
    {
        return course_name;
    }
    string getCourseID()
    {
        return course_id;
    }
    string getCourseTeacher()
    {
        return teacher;
    }

private://私人
    string course_name = "Computer Networks";
    string course_id = "one";
    string teacher = "Tom";
}; 

int main()
{
    GradeBook myGradeBook; // 創建一個名為 myGradeBook 的 GradeBook 物件
    myGradeBook.displayMessage(); // 呼叫物件的 displayMessage 函數 
    myGradeBook.setCourse("C++ programming");//使用 setCourse 設置新的課程名稱為 C++ programming
    myGradeBook.setCourseID("tow");
    myGradeBook.setTeacher("Danny");
    myGradeBook.displayMessage();
    cout <<"班別是:" << myGradeBook.getCourseID() << endl;
    cout <<"老師是:" << myGradeBook.getCourseTeacher() << endl;
} // end main
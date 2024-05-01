#include <iostream>

// Fig. 3.1: fig03_01.cpp
// 定義一個名為 GradeBook 的類別，其中包含一個成員函式 displayMessage；
// 創建一個 GradeBook 物件並呼叫其 displayMessage 函式
using namespace std;

// GradeBook 類別定義
class GradeBook
{
public:
    // 函式用於向 GradeBook 使用者顯示歡迎訊息
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
    } // displayMessage 函式結束

    // 設定課程名稱的函式
    void setCourse(string name) //如果輸入的課程名稱不是空的，則會將其設定為 course_name
    {
        if (name != "")
            course_name = name;
    }
private:
    string course_name = "Computer Networks";
}; // GradeBook 類別結束  

// main 函式開始執行程式
int main()
{
    GradeBook myGradeBook;  // 創建一個名為 myGradeBook 的 GradeBook 物件
    myGradeBook.displayMessage(); // 呼叫物件的 displayMessage 函式 
    myGradeBook.setCourse("C++ programming");
    //myGradeBook.course_name = "I don't know!";
    myGradeBook.displayMessage();
} // end main
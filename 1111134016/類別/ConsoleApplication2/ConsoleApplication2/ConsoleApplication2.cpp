// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <string> // 新增頭文件<string>

using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name: " << course_name << endl;
    }

    void setCourse(string name)
    {
        if (name != "")
            course_name = name;
    }

    // 新增取得課程ID的成員函數
    string getCourseID() const
    {
        return courseID;
    }

    // 新增取得教師名稱的成員函數
    string getCourseTeacher() const
    {
        return teacher;
    }

private:
    string course_name = "Computer Networks";
    string courseID = "11111"; // 預設課程ID
    string teacher = "sssss"; // 預設教師名稱
};

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("C++ programming");

    // 取得課程ID和教師名稱並印在螢幕上
    cout << "Course ID: " << myGradeBook.getCourseID() << endl;
    cout << "Teacher: " << myGradeBook.getCourseTeacher() << endl;

    myGradeBook.displayMessage();
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

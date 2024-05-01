// 1111134011.5.1-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    // 顯示歡迎訊息及課程資訊
    void displayMessage() const
    {
        // 顯示歡迎訊息
        cout << "Welcome to the Grade Book!" << endl;
        // 顯示課程名稱
        cout << "Course Name: " << course_name << endl;
        // 顯示課程編號
        cout << "Course ID: " << courseID << endl;
        // 顯示教師姓名
        cout << "Teacher: " << teacher << endl;
    }

    // 設置課程名稱
    void setCourse(string name)
    {
        // 確保課程名稱不為空
        if (!name.empty())
            course_name = name;
    }

    // 設置課程編號
    void setCourseID(string id)
    {
        courseID = id;
    }

    // 設置教師姓名
    void setCourseTeacher(string t)
    {
        teacher = t;
    }

    // 取得課程編號
    string getCourseID() const
    {
        return courseID;
    }

    // 取得教師姓名
    string getCourseTeacher() const
    {
        return teacher;
    }

private:
    // 預設課程名稱為 "Computer Networks"
    string course_name = "Computer Networks";
    // 課程編號
    string courseID;
    // 教師姓名
    string teacher;
};

int main()
{
    // 建立一個 GradeBook 物件
    GradeBook myGradeBook;
    // 設置課程名稱為 "C++ Design"
    myGradeBook.setCourse("C++ Design");

    // 設置課程編號為 "C++"
    myGradeBook.setCourseID("C++");
    // 設置教師姓名為 "Angela Baby"
    myGradeBook.setCourseTeacher("Angela Baby");

    // 取得並印出課程編號
    cout << "Course ID: " << myGradeBook.getCourseID() << endl;
    // 取得並印出教師姓名
    cout << "Teacher: " << myGradeBook.getCourseTeacher() << endl;

    // 顯示完整訊息
    myGradeBook.displayMessage();

    return 0;
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

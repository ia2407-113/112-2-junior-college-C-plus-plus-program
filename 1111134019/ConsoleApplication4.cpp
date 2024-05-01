// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    void displayMessage() const
    {
        cout << "歡迎使用成績登錄系統！" << endl;
        cout << "課程名稱：" << course_name << endl;
        cout << "課程編號：" << courseID << endl;
        cout << "授課教師：" << teacher << endl;
    }

    void setCourse(string name)
    {
        if (!name.empty())
            course_name = name;
    }

    void setCourseID(string id)
    {
        if (!id.empty())
            courseID = id;
    }

    void setCourseTeacher(string t)
    {
        if (!t.empty())
            teacher = t;
    }

    // 新增的函數用於取得課程編號
    string getCourseID() const
    {
        return courseID;
    }

    // 新增的函數用於取得授課教師
    string getCourseTeacher() const
    {
        return teacher;
    }

private:
    string course_name = "計算機網絡";
    string courseID = "34019";
    string teacher = "G";
};

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();

    myGradeBook.setCourse("C++ 程式設計");
    myGradeBook.setCourseID("340190");
    myGradeBook.setCourseTeacher("G");

    myGradeBook.displayMessage();

    // 在主程式中取得並印出課程編號與授課教師的值
    cout << "課程編號：" << myGradeBook.getCourseID() << endl;
    cout << "授課教師：" << myGradeBook.getCourseTeacher() << endl;

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

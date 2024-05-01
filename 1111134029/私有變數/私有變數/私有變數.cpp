#include <iostream>
using namespace std;
class GradeBook
{
public:
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
    }

    void setCourse(string name)
    {
        if (name != "")
            course_name = name;
    }
    void setCourseID(string ID)
    {
        if (ID != "")
            courseID = ID;
    }
    void setCourseTeacher(string inputteacher)
    {
        teacher = inputteacher;
    }
    string getCourseID()
    {
        return courseID;
    }
    string getCourseTeacher()
    {
        return teacher;
    }
private:
    string course_name = "Computer Networks";
    string courseID = "123";
    string teacher = "abc";
};
int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
    myGradeBook.setCourseID("456");
    myGradeBook.setCourseTeacher("def");
    cout << myGradeBook.getCourseID() << endl;
    cout << myGradeBook.getCourseTeacher();
} // end main 
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

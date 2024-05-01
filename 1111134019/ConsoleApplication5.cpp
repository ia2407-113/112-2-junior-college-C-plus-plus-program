// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string> // 包含 string 標頭以使用字串資料型別

using namespace std;

// GradeBook 類別定義
class GradeBook
{
public:
    // 函數用於向使用者顯示歡迎訊息
    void displayMessage() const
    {
        cout << "歡迎使用成績登錄系統！" << endl;
        cout << "課程名稱：" << course_name << endl;
        cout << "課程編號：" << courseID << endl;
        cout << "授課教師：" << teacher << endl;
    }

    // 函數用於設定課程名稱
    void setCourse(string name)
    {
        if (!name.empty())
            course_name = name;
    }

    // 函數用於設定課程編號
    void setCourseID(string id)
    {
        if (!id.empty())
            courseID = id;
    }

    // 函數用於設定授課教師
    void setCourseTeacher(string t)
    {
        if (!t.empty())
            teacher = t;
    }

private:
    string course_name = "計算機概論"; // 預設課程名稱
    string courseID = "34019"; // 預設課程編號
    string teacher = "G"; // 預設教師名稱
};

// 主函數開始程式執行
int main()
{
    GradeBook myGradeBook; // 創建一個名為 myGradeBook 的 GradeBook 物件
    myGradeBook.displayMessage(); // 呼叫物件的 displayMessage 函數

    // 設定課程資訊
    myGradeBook.setCourse("C++ 程式設計");
    myGradeBook.setCourseID("340190");
    myGradeBook.setCourseTeacher("G");

    // 顯示更新後的課程資訊
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

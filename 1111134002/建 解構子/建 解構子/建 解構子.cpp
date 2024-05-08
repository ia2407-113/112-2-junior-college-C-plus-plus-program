// 建 解構子.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>

// 引入iostream標頭檔

// 定義GradeBook類別，其中包含成員函式displayMessage
// 創建GradeBook物件並調用其displayMessage函式。
using namespace std;

// 使用標準命名空間

// GradeBook類別定義
class GradeBook
{
public:
    // 公開的建構子，接受初始名稱並初始化course_name
    GradeBook(string initial_name)
    {
        course_name = initial_name;
    }

    // 解構子
    ~GradeBook()
    {
        cout << "Bye Bye my course!" << endl;
    }

    // 顯示歡迎訊息和課程名稱的成員函式
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
    } // end function displayMessage

    // 設置課程名稱的成員函式
    void setCourse(string name)
    {
        // 如果name不為空字串，則設置course_name
        if (name != "")
            course_name = name;
    }

    // 獲取課程名稱的成員函式
    string getCourse()
    {
        return course_name;
    }

private:
    // 私有資料成員，表示課程名稱，預設為"Computer Networks"
    string course_name = "Computer Networks";
}; // end class GradeBook  

// 程式的入口函式main
int main()
{
    // 創建一個名為myGradeBook的GradeBook物件，並以"Course name is unknown"初始化
    GradeBook myGradeBook("Course name is unknown");

    // 調用物件的displayMessage函式，顯示歡迎訊息和初始化後的課程名稱
    myGradeBook.displayMessage();

    // 設置課程名稱為"C++ programming"
    myGradeBook.setCourse("C++ programming");

    // 再次調用displayMessage函式，顯示更新後的課程名稱
    myGradeBook.displayMessage();
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

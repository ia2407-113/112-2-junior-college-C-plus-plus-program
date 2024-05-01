#include <iostream>
using namespace std;

// GradeBook 類別定義
class GradeBook {
public:
    // 函數顯示歡迎消息給成績單使用者
    void displayMessage() const {
        cout << "歡迎來到成績單！" << endl;
        cout << "課程名稱是：" << course_name << endl;
        cout << "課程編號是：" << courseID << endl;
        cout << "授課老師是：" << teacher << endl;
    }

    // 函數設置課程名稱
    void setCourse(string name) {
        if (!name.empty()) // 檢查名稱是否為空
            course_name = name;
    }

    // 函數設置課程編號
    void setCourseID(int id) {
        courseID = id;
    }

    // 函數設置授課老師
    void setCourseTeacher(string t) {
        if (!t.empty()) // 檢查名稱是否為空
            teacher = t;
    }

    // 取得課程編號
    int getCourseID() const {
        return courseID;
    }

    // 取得授課老師
    string getCourseTeacher() const {
        return teacher;
    }

private:
    string course_name = "計算機網絡";
    int courseID = 0;
    string teacher = "未指定";
};

// 主函數開始程式執行
int main() {
    GradeBook myGradeBook; // 創建一個名為 myGradeBook 的 GradeBook 對象
    myGradeBook.displayMessage(); // 調用對象的 displayMessage 函數
    myGradeBook.setCourse("C++ 編程"); // 設置課程名稱
    myGradeBook.setCourseID(2407); // 設置課程編號
    myGradeBook.setCourseTeacher("陳老師"); // 設置授課老師
    myGradeBook.displayMessage(); // 顯示更新後的資訊

    // 取得課程編號和授課老師並印出
    cout << "課程編號是：" << myGradeBook.getCourseID() << endl;
    cout << "授課老師是：" << myGradeBook.getCourseTeacher() << endl;

    return 0;
}
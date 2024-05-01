// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

// Fig. 3.1: fig03_01.cpp1. 新增setCourseID與setCourseTeacher兩個成員函數，以及私有變數courseID與teacher，使其能透過setCourseID與setCourseTeacher兩個成員函數分別修改私有變數courseID與teacher的內容。
//2. 新增getCourseID與getCourseTeacher兩個成員函數，於主程式main中取得courseID與teacher的值，並印在螢幕中。
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void setCourseID(string ID)
    {
        if (ID != "")
            courseID = ID;
        cout << "courseID is: " << courseID << endl;
    } // end function displayMessage
    string getCourseID(){
        return courseID;
    };

    void setCourseTeacher(string tea)
    {
        if (tea != "")
            teacher = tea;
        cout << "teacher is: " << teacher << endl;
    };
    string getCourseTeacher(){
        return teacher;
    }

private:
    string courseID="2222";
    string teacher ="banana";
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.setCourseID("1111"); // call object's displayMessage function 
    myGradeBook.setCourseTeacher("apple");
    cout << myGradeBook.getCourseID() << endl;
    cout << myGradeBook.getCourseTeacher() << endl;
    //myGradeBook.course_name = "I don't know!";
    
} // end main
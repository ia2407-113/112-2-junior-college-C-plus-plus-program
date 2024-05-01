// s1111134006.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
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
    string getCourseID() {
        return courseID;
    };

    void setCourseTeacher(string tea)
    {
        if (tea != "")
            teacher = tea;
        cout << "teacher is: " << teacher << endl;
    };
    string getCourseTeacher() {
        return teacher;
    }

private:
    string courseID = "2222";
    string teacher = "banana";
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
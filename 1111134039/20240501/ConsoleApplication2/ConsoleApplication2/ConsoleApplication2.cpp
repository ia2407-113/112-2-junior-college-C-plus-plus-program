#include <iostream>

// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    string a, b;
    // function that displays a welcome message to the GradeBook user
    void setCoursecoureID()
    {
        cout << "請輸入科目";
        cin >> a;
        courseID = a;
    }

    void setCourseTeacher()
    {
        cout << "請輸入老師";
        cin >> b;
        teacher = b;
    }
    string getCoursecoureID()
    {
        return courseID;
    }
    string getCourseTeacher()
    {
        return teacher;
    }

private:
    string courseID;
    string teacher;
}; // end class GradeBook  

// function main begins program execution
int main()
{
    string c, d;
    GradeBook myGradeBook;
    myGradeBook.setCoursecoureID();
    myGradeBook.setCourseTeacher();

    c = myGradeBook.getCoursecoureID();
    d = myGradeBook.getCourseTeacher();
    cout << c <<"\n";
    cout << d;
} // end main
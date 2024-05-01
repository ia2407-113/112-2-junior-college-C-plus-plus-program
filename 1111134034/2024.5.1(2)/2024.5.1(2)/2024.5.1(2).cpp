#include <iostream>

// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    string a,b;


    void setCourseID()
    {
        cout << "請輸入科目:";
        cin >> a;
        courseID = a;
    }
    void setCourseTeacher()
    {
        cout << "請輸入老師:";
        cin >> b;
        teacher = b;
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
    string courseID;
    string teacher;
};

// function main begins program execution
int main()
{
    string c, d;
    GradeBook myGradeBook;
    myGradeBook.setCourseID();
    myGradeBook.setCourseTeacher();

    c = myGradeBook.getCourseID();
    d = myGradeBook.getCourseTeacher();

    cout <<"科目:"<< c << "\n";
    cout <<"老師:"<< d;
} // end main
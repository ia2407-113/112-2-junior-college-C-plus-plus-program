#include <iostream>

// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    string Cname, Tname;
    void setCourseID()
    {
        cout << "請輸入課程名稱";
        cin >> Cname;
        courseID = Cname;
    }
    void setCourseTeacher()
    {
        cout << "請輸入老師名稱";
        cin >> Tname;
        teacher = Tname;
    }
    string getCourse()
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
int main()
{
    string cou,tea; 
    GradeBook myGradeBook; 
    myGradeBook.setCourseID();
    myGradeBook.setCourseTeacher();

    cou = myGradeBook.getCourse();
    tea = myGradeBook.getCourseTeacher();

    cout << "課程名稱" << cou << endl;
    cout << "老師姓名是" << tea << endl;
} 
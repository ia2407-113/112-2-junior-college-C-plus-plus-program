#include <iostream>

using namespace std;
class GradeBook
{
public:

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
        cout << "setCourseID is: " << courseID << endl;
        cout << "setCourseTeacher is: " << teacher << endl;
    }

    void setCourse(string name)
    {
        if (name != "")
            course_name = name;
    }
    void setCourseID(string a)
    {
        if (a != "")
        {
            courseID = a;
        }

    }
    void setCourseTeacher(string b)
    {
        if (b != "")
        {
            teacher = b;
        }
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
    string courseID = "hello";
    string teacher = "world";
    string course_name = "Computer Networks";
};


int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    myGradeBook.setCourse("C++ programming");
    myGradeBook.setCourseID("我誰!");
    myGradeBook.setCourseTeacher("我瘋子!");
    myGradeBook.displayMessage();
    cout << myGradeBook.getCourseID();
    cout << myGradeBook.getCourseTeacher();
    
}
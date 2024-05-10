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
    cout << myGradeBook.getCourseTeacher() << endl;
} 
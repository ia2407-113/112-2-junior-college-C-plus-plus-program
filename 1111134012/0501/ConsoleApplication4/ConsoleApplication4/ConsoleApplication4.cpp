#include <iostream>
using namespace std;

class GradeBook
{
public:

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
        cout << "CourseID is: " << courseID << endl;
        cout << "Course Teacher is: " << teacher << endl;
    }

    void setCourse(string name)
    {
        if (name != "")
            course_name = name;
    }

    void setCourseID(string id) {
        if (id != "")
            courseID = id;
    }

    void setCourseTeacher(string Teacher) {
        if (Teacher != "")
            teacher = Teacher;
    }

    string getCourseID() {
        return courseID;
    }

    string getCourseTeacher() {
        return teacher;
    }
private:
    string courseID = "6666666";
    string teacher ="Tom";
    string course_name = "Computer Networks";
}; 


int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    myGradeBook.setCourseID("1234567");
    myGradeBook.setCourseTeacher("Jym");
    myGradeBook.displayMessage();
    cout << "學號是:" << myGradeBook.getCourseID() << endl;
    cout << "老師是:" << myGradeBook.getCourseTeacher() << endl;
};
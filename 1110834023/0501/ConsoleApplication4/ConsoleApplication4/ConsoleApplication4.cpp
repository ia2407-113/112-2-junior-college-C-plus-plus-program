// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Course ID: " << courseID << endl;
        cout << "Teacher: " << teacher << endl;
    } 

    void setCourseName(string name)
    {
        if (!name.empty())
            course_name = name;
    }

    void setCourseID(string id)
    {
        if (!id.empty())
            courseID = id;
    }

    void setCourseTeacher(string t)
    {
        if (!t.empty())
            teacher = t;
    }

    string getCourseID() const
    {
        return courseID;
    }

    // Function to get the course teacher
    string getCourseTeacher() const
    {
        return teacher;
    }

private:
    string course_name = "Computer Networks";
    string courseID = "CS101";
    string teacher = "Mr. Smith";
}; 
int main()
{
    GradeBook myGradeBook; 
    cout << "Initial Details:" << endl;
    myGradeBook.displayMessage();

    myGradeBook.setCourseName("C++ programming");
    myGradeBook.setCourseID("CS102");
    myGradeBook.setCourseTeacher("Ms. Johnson");


    cout << "\nModified Details:" << endl;
    myGradeBook.displayMessage();

    cout << "\nCourse ID: " << myGradeBook.getCourseID() << endl;
    cout << "Teacher: " << myGradeBook.getCourseTeacher() << endl;

    return 0;
} 

#include <iostream>

// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name is: " << course_name << endl;
    } // end function displayMessage

    void setCourse(string name)
    {
        course_name = name;
    }
    void setCourseID(string ID)
    {
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
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.setCourse("C++ programming");
    //myGradeBook.course_name = "I don't know!";
    myGradeBook.displayMessage();
    myGradeBook.setCourseID("456");
    myGradeBook.setCourseTeacher("def");
    cout << myGradeBook.getCourseID() << endl;
    cout << myGradeBook.getCourseTeacher();
} // end main
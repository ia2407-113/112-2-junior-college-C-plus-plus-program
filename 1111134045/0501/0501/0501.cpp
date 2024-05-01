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
        cout << courseID << endl;
        cout << teacher << endl;
    } 

    void setCourseID(string name)
    {
        if (name != "")
            courseID = name;
    }
    void setCourseTeacher(string name)
    {
        if (name != "")
            teacher = name;
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
    string courseID = "unalterID";
    string teacher = "unalterTC";
}; 

int main()
{
    GradeBook myGradeBook; 
    myGradeBook.displayMessage();
    myGradeBook.setCourseID("programing");
    myGradeBook.setCourseTeacher("jia");
    cout << myGradeBook.getCourseID() << "\n";
    cout << myGradeBook.getCourseTeacher();
}
#include <iostream>
#include <string> // For string class

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

    // Function to set the course ID
    void setCourseID(string courseId)
    {
        courseID = courseId;
    }

    // Function to set the teacher's name
    void setCourseTeacher(string teacherName)
    {
        teacher = teacherName;
    }

    // Function to get the course ID
    string getCourseID() const
    {
        return courseID;
    }

    // Function to get the teacher's name
    string getCourseTeacher() const
    {
        return teacher;
    }

private:
    string course_name = "Computer Networks"; // private variable for the course name
    string courseID; // private variable for the course ID
    string teacher;  // private variable for the teacher's name
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 

    // Set the course ID and teacher's name using the setCourseID and setCourseTeacher functions
    myGradeBook.setCourseID("cbj180");
    myGradeBook.setCourseTeacher("David chang");

    // Display the updated message
    myGradeBook.displayMessage();

    // Print the course ID and teacher's name using the getCourseID and getCourseTeacher functions
    cout << "Course ID: " << myGradeBook.getCourseID() << endl;
    cout << "Teacher: " << myGradeBook.getCourseTeacher() << endl;

    return 0;
} // end main

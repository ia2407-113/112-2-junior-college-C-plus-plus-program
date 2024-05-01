// 1110834022.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string> // Include the string library

using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Course ID: " << courseID << endl;
        cout << "Teacher: " << teacher << endl;
    } // end function displayMessage

    // Function to set the course name
    void setCourse(string name)
    {
        if (!name.empty()) // Check if the provided name is not empty
            course_name = name;
    }

    // Function to set the course ID
    void setCourseID(string id)
    {
        if (!id.empty()) // Check if the provided ID is not empty
            courseID = id;
    }

    // Function to set the course teacher
    void setCourseTeacher(string t)
    {
        if (!t.empty()) // Check if the provided teacher name is not empty
            teacher = t;
    }

private:
    string course_name = "Computer Networks"; // Default course name
    string courseID; // Private member variable for course ID
    string teacher; // Private member variable for teacher name
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 

    // Set course details using member functions
    myGradeBook.setCourse("C++ programming");
    myGradeBook.setCourseID("1110834022");
    myGradeBook.setCourseTeacher("aron");

    myGradeBook.displayMessage(); // Display updated course details

    return 0; // Indicate successful termination
} // end main

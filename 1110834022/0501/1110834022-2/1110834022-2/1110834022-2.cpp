// 1110834022-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

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
    }

    // Function to get the course ID
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
    string course_name = "Computer Networks"; // Default course name
    string courseID = "1110834022"; // Default course ID
    string teacher = "aron"; // Default teacher name
};

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 

    // Get and print course ID and teacher using member functions
    cout << "Course ID: " << myGradeBook.getCourseID() << endl;
    cout << "Teacher: " << myGradeBook.getCourseTeacher() << endl;

    return 0;
}


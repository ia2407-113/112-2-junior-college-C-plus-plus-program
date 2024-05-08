#include "course.h"



    // function that displays a welcome message to the GradeBook user

void course::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
};
    void course::setCourse(string name)
    {
        course_name = name;
    }
    void course::setCourseID(string ID)
    {
        courseID = ID;
    }
    void course::setCourseTeacher(string inputteacher)
    {
        teacher = inputteacher;
    }
    string course::getCourseID()
    {
        return courseID;
    }
    string course::getCourseTeacher()
    {
        return teacher;
    }


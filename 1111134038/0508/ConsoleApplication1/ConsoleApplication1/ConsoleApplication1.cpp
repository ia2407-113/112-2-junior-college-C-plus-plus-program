#include <iostream>

// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    GradeBook(string initial_name)
    {
        course_name = initial_name;
    }
    ~GradeBook()
    {
        cout << "Bye Bye course";
    }

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
private:
    string course_name;
};


int main()
{
    GradeBook myGradeBook("English");
    myGradeBook.displayMessage(); 
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
} 
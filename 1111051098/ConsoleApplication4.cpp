#include <iostream>
using namespace std;
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
    string course_name = "Computer Networks";
};
int main()
{
    GradeBook myGradeBook("English");
    myGradeBook.displayMessage();
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
} 
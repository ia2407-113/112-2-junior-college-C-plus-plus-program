#include <iostream>


using namespace std;


class GradeBook
{
public:
     GradeBook(string abc_name)
    {
         course_name = abc_name;
    }
   
     ~GradeBook()
    {
         cout << "bye bye";
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
    string getCourse()
    {
        return course_name;
    }
private:
    string course_name ;
}; 

int main()
{
    GradeBook myGradeBook("gradebook is unknow");
    myGradeBook.displayMessage();  
    myGradeBook.setCourse("C++ programming");
    myGradeBook.displayMessage();
  
} 
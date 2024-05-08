#include <iostream>
using namespace std;

class GradeBook
{
public:
    GradeBook (string inital_course);
    ~GradeBook();
    void displayMessage() const;
      
     void setCourse(string name);
private:
    string course_name ;
};


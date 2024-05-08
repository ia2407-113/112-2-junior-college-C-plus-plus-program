#include <iostream>

using namespace std;

class GradeBook
{
    public:
        GradeBook(string a_course);
        
        ~GradeBook();

        void displayMessage() const;

        void setCourse(string name);
private:
    string course_name;
};

#include <iostream>

using namespace std;
class GradeBook
{
public:
    void CoyrseID() const
    {
        cout << "Course ID is: " << ID << endl;
    }

    void CoyrseTeacher() const
    {
        cout << "Course Teacher is: " << Teacher << endl;
    }
    void setCourseID(string ID1)
    {
        if (ID1 != "")
            ID = ID1;
    }
    void setCourseTeacher(string Teacher1)
    {
        if (Teacher1 != "")
            Teacher = Teacher1;
    }
    string getCourseID()
    {
     return ID;
    }
    string getCourseTeacher()
    {
        return Teacher;
    }
private:
    string ID = "1111134007";
    string Teacher = "侯幸雨";
}; 

int main()
{
    GradeBook myGradeBook;
    myGradeBook.CoyrseID();
    myGradeBook.setCourseID("1111134009");
    myGradeBook.CoyrseTeacher();
    myGradeBook.setCourseTeacher("陳大仁");
    myGradeBook.CoyrseID();
    myGradeBook.CoyrseTeacher();
    cout << "ID是:" << myGradeBook.getCourseID() << endl ;
    cout << "Teacher是:" << myGradeBook.getCourseTeacher() << endl;
} 
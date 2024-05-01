#include <iostream>


using namespace std;


class GradeBook
{
   
public:
    string a, b,c;
    void setCourseID()
    {
        cout << "請輸入科目"  ;
        cin >> a;
        CourseID=a;
    }

    void setCourseTeacher()
    {
        cout << "請輸入老師";
        cin >> b;
        teacher = b;
    }
    string getCourseID()
    {
        return  CourseID;
    }
    string getCourseTeacher()
    {
        return teacher;
    }
 
private:
    string CourseID;
    string teacher;
};
int main()
{
    string c, d;
    GradeBook mygradeBook;
    mygradeBook.setCourseID();
    mygradeBook.setCourseTeacher();
    c = mygradeBook.getCourseID();
    d = mygradeBook.getCourseTeacher();
    cout << "課程為" << c << "\n";
    cout << "老師為" << d << "\n";
}
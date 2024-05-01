#include <iostream>

using namespace std;

class GradeBook
{
public:
    string Cname, Tname;
    void setCourseID()
    {
        cout << "請輸入課程名稱";
        cin >> Cname;
        courseID = Cname;
    }
    void setCourseTeacher()
    {
        cout << "請輸入老師名稱";
        cin >> Tname;
        teacher = Tname;
    }
    string getCourse()
    {
        return courseID;
    }
    string getCourseTeacher()
    {
        return teacher;
    }
    
private:
    string courseID;
    string teacher;
};

int main()
{
    string cou, tea;
    GradeBook myGradeBook;
    myGradeBook.setCourseID();
    myGradeBook.setCourseTeacher();
    
    cou = myGradeBook.getCourse();
    tea = myGradeBook.getCourseTeacher();

    cout << "課程名稱:" << cou << endl;
    cout <<"老師的名字是:" << tea << endl;
} 
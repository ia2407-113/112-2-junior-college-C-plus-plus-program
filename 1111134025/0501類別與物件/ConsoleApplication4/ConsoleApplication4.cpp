#include <iostream>

using namespace std;

class GradeBook
{
public:
    void displayMessage() const{
        cout << "id是" << courseID << endl;
        cout << "老師是" << teacher << endl;
    } 

    void setCourseID(string id){
        if (id != "")
            courseID = id;
    }

    void setCourseTeacher(string teach) {
        if (teach != "")
            teacher=teach;
    }

    string getCourseID(){
        return courseID;
    }

    string getCourseTeacher(){
        return teacher;
    }

private:
    string courseID = "114514";
    string teacher = "Cupcakke";
};

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    myGradeBook.setCourseID("228922");
    myGradeBook.setCourseTeacher("jiafei");
    myGradeBook.displayMessage();
    myGradeBook.getCourseID();
    myGradeBook.getCourseTeacher();
} 
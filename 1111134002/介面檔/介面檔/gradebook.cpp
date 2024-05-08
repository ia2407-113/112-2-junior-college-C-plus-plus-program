#include <iostream>
#include "gradebook.h"
using namespace std;
//�غc�l
GradeBook::GradeBook(string initial_name)
{
    course_name = initial_name;
}

// �Ѻc�l
GradeBook::~GradeBook()
{
    cout << "Bye Bye my course!" << endl;
}

// ����w��T���M�ҵ{�W�٪������禡
void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
} // end function displayMessage

// �]�m�ҵ{�W�٪������禡
void GradeBook::setCourse(string name)
{
    // �p�Gname�����Ŧr��A�h�]�mcourse_name
    if (name != "")
        course_name = name;
}

// ����ҵ{�W�٪������禡
string GradeBook::getCourse()
{
    return course_name;
}

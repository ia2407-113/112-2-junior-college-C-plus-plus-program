//��@��
#include<iostream>
#include"GradeBook.h"

//�b���O���w�q�F�R�A�����]�ܼƩΨ禡�^�ɡA�i�H�ϥ� :: �Ӫ�ܸ����O���@�ΰ�
using namespace std;
GradeBook::GradeBook(string initial_name) {   //�غc�l
    course_name = initial_name;   //��l�ƽҵ{�W��
}
GradeBook::~GradeBook()     //�Ѻc�l
{
    cout << "Bye Bye" << endl;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the Grade Book!" << endl;
    cout << "Course Name is: " << course_name << endl;
}
void GradeBook::setCourse(string name)
{
    if (name != "")
        course_name = name;  //�]�m���ҵ{�W��
}
string GradeBook::getCourse() {
    return course_name;  //��^�ҵ{�W�٪��r�Ŧ�
}

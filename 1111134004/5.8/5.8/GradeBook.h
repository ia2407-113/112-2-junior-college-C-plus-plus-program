#pragma once //�T�O�Ӽ��Y�ɥu�Q�]�t�@������Ʃw�q�����~
//���Y��\������
#include<iostream>
using namespace std;
class GradeBook
{
public:
	GradeBook(string initial_name); //�غc�l
	~GradeBook(); //�Ѻc�l
	void displayMessage() const; //����w��T���������禡
	void setCourse(string name); //�]�m�ҵ{�W�٪������禡
	string getCourse(); //����ҵ{�W�٪������禡
private:
	string course_name;  //�s�x�ҵ{�W�٪��p�������ܼ�
};

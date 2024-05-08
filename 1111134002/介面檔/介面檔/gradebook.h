#pragma once
#include <iostream>
using namespace std;
class GradeBook
{
public:
	GradeBook(string initial_name);
	~GradeBook();
	void displayMessage() const;
	void setCourse(string name);
	string getCourse();
private:
	// 私有資料成員，表示課程名稱，預設為"Computer Networks"
	string course_name = "Computer Networks";
};
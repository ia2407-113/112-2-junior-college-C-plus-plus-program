#pragma once //確保該標頭檔只被包含一次防止重複定義的錯誤
//標頭檔\介面檔
#include<iostream>
using namespace std;
class GradeBook
{
public:
	GradeBook(string initial_name); //建構子
	~GradeBook(); //解構子
	void displayMessage() const; //顯示歡迎訊息的成員函式
	void setCourse(string name); //設置課程名稱的成員函式
	string getCourse(); //獲取課程名稱的成員函式
private:
	string course_name;  //存儲課程名稱的私有成員變數
};

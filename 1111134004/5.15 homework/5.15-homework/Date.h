#pragma once
// Date.h   Date class 
#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12; //十二個月
	explicit Date(int = 1, int = 1, int = 1900); //建構子(1900/1/1為初始值)
	void print() const; 
	void printROC() const;
	~Date();  //解構子
private:
	unsigned int month; 
	unsigned int day; 
	unsigned int year; 

	unsigned int checkDay(int) const; //檢查是否符合格式
}; 

#endif
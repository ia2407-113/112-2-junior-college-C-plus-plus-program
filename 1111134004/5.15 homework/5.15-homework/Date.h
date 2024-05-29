#pragma once
// Date.h   Date class 
#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12; //�Q�G�Ӥ�
	explicit Date(int = 1, int = 1, int = 1900); //�غc�l(1900/1/1����l��)
	void print() const; 
	void printROC() const;
	~Date();  //�Ѻc�l
private:
	unsigned int month; 
	unsigned int day; 
	unsigned int year; 

	unsigned int checkDay(int) const; //�ˬd�O�_�ŦX�榡
}; 

#endif
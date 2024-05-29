// Fig. 9.1: Time.h
// Time class definition.
// Member functions are defined in Time.cpp

// prevent multiple inclusions of header
#ifndef Time_H
#define Time_H

// Time class definition
class Time
{
public:
	Time(int h, int min, int s);
	void printtime() const;
	~Time();
private:
	unsigned int hour; // 0 - 23 (24-hour clock format)
	unsigned int minute; // 0 - 59
	unsigned int second; // 0 - 59
}; // end class Time

#endif#pragma once

#ifndef Time_H
#define Time_H
class Time
{
public:
	Time(int h, int min, int s);
	void printtime() const;	
	~Time();
private:
	unsigned int hour; 
	unsigned int minute; 
	unsigned int second; 
}; 

#endif#pragma once

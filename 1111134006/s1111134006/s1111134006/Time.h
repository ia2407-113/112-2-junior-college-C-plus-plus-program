#pragma once
#ifndef TIME_H
#define TIME_H

class Time
{
public:
	static const unsigned int hoursOfDay = 24;
	static const unsigned int minutesOfHour = 60;
	static const unsigned int secondsOfMinute = 60;
	explicit Time(int = 1, int = 1, int = 1);
	void show() const;
	~Time();
private:
	unsigned int hour; // 0-24
	unsigned int minute; // 0-59
	unsigned int second; // 0-59
};

#endif

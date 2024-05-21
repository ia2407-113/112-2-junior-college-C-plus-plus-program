#ifndef TIME_H
#define TIME_H

class Time {
public:
	Time(int h = 0, int m = 0, int s = 0);
	void setTime(int, int, int);
	void print() const;

private:
	int hour;  //0 - 23(24小時的宣告)
	int minute;  //0-59
	int second;  //0-59
};
#endif

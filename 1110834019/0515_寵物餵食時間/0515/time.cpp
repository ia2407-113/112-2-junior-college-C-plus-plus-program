#include <iostream>
#include <iomanip>
#include "time.h"

using namespace std;

// Constructor
Time::Time(int h, int m, int s) {
	setTime(h, m, s);
}

//設定時間
void Time::setTime(int h, int m, int s) {
	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	second = (s >= 0 && s < 60) ? s : 0;

}

//輸出時間 (HH:MM:SS)
void Time::print() const {
	cout << setfill('0') << setw(2) << hour << ":";
	cout << setw(2) << minute << ":";
	cout << setw(2) << second;
}
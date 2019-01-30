#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}

// -------------------------------------------
//   custom copy constructor
//		- ถูกเรียกเมื่อมีการ copy / assign object
// -------------------------------------------
Time::Time(Time &t) {

	// ลอง set ให้ต่างจากปกติ โดยให้ second เป็น 0
	setTime(t.hour, t.minute, 0);
	cout << "----In copy constructor of ----" << endl;
}

void Time::setTime(int hour, int minute, int second) {
	if ((0 <= hour && hour <= 23) &&
		(0 <= minute && minute <= 59) &&
		(0 <= second && second <= 59)) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	else { 
		throw invalid_argument("hour, minute and/or second was out of range\n");
	}
}

string Time::getUniversalFormat() const {
	string s = "";

	s = (hour < 10 ? "0" : "") + to_string(hour) + 
		(minute < 10 ? ":0" : ":") + to_string(minute) +
		(second < 10 ? ":0" : ":") + to_string(second);

	return s;
}

string Time::getStandardFormat() const {
	string s = "";

	s = ((hour == 0 || hour == 12)? "12" : to_string(hour%12)) +
		(minute < 10 ? ":0" : ":") + to_string(minute) +
		(second < 10 ? ":0" : ":") + to_string(second) +
		(hour < 12 ? " AM" : " PM");

	return s;
}





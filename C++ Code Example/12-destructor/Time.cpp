#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
	cout << getUniversalFormat() << " constructor is called." << endl;
}

Time::Time(Time &t) {
	setTime(t.hour, t.minute, 0);
}

// -----------------------------------
//    Destructor 
//    - ถูกเรียก เมื่อโปรแกรมออกจาก scope
//      ของการประกาศ/สร้าง object นี้
//
//    - Destructor is called in reverse order of
//      constructor
//
//	  - often use when 
//        - object has dynamically allocated memory
//        - closing files
// -----------------------------------
Time::~Time() {
	cout << getUniversalFormat() << " DESTRUCTOR is called." << endl;
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





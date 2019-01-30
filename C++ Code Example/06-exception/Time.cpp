#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s) {
	if ((0 <= h && h <= 23) &&
		(0 <= m && m <= 59) &&
		(0 <= s && s <= 59)) {
		hour = h;
		minute = m;
		second = s;
	}
	else { 

		// -------------------------------------------
		//   Exception : object indicating error
		//     - We can throw exception to notify errors
		// -------------------------------------------

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





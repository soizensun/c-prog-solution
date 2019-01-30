#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
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

// -----------------------------------
//    Binary Operator Overload 
// -----------------------------------
bool Time::operator==(const Time &t) const {
	return hour == t.hour && 
		   minute == t.minute &&
		   second == t.second;
}
bool Time::operator!=(const Time &t) const {
	return !(hour == t.hour && 
		     minute == t.minute &&
		     second == t.second);
}
bool Time::operator<(const Time &t) const {
	if (hour < t.hour) return true;
	if (hour == t.hour && minute < t.minute) return true;
	if (hour == t.hour && minute == t.minute && second < t.second) return true;
	return false;
}
bool Time::operator<=(const Time &t) const {
	if (hour < t.hour) return true;
	if (hour == t.hour && minute < t.minute) return true;
	if (hour == t.hour && minute == t.minute && second <= t.second) return true;
	return false;
}
bool Time::operator>(const Time &t) const {
	if (hour > t.hour) return true;
	if (hour == t.hour && minute > t.minute) return true;
	if (hour == t.hour && minute == t.minute && second > t.second) return true;
	return false;
}
bool Time::operator>=(const Time &t) const {
	if (hour > t.hour) return true;
	if (hour == t.hour && minute > t.minute) return true;
	if (hour == t.hour && minute == t.minute && second >= t.second) return true;
	return false;
}

Time &Time::operator+(const Time &t) const {
	Time *result = new Time(hour + t.hour, 
							minute + t.minute,
							second + t.second);  
	// ยังไม่ถูกต้อง หากบวกแล้วเกินเงื่อนไข
	return *result;
}

// -----------------------------------
//    Unary Operator Overload 
// -----------------------------------
Time &Time::operator++() { // prefix increment operator
	helpIncrement();    // หากเกิน 59 จะเปลี่ยนนาที
	return *this;
}
Time Time::operator++(int) { // postfix increment operator
	Time temp = *this;
	helpIncrement();   // หากเกิน 59 จะเปลี่ยนนาที
	return temp;
}
Time &Time::operator+=(int s) {
	for (int i = 0; i < s; i++) {
		helpIncrement();  // หากเกิน 59 จะเปลี่ยนนาที
	}
	return *this;
}

// -----------------------------------
// helper method / utility method
//   - used only within class to prevent
//     duplicated code
//     ใช้แค่ในคลาส จึงเป็น private ช่วยให้
//     ไม่เกิดโค้ดซ้ำซ้อน
// -----------------------------------
void Time::helpIncrement() {
	if (second + 1 < 60) {
		++second;
	} 
	else if (minute + 1 < 60) {
		++minute;
		second = 0;
	}
	else {
		hour++;
		minute = 0;
		second = 0;
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

ostream &operator<<(ostream &output, const Time &t) {
	output << t.getStandardFormat();
	return output;
}





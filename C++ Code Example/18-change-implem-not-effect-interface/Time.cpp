#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "Time.h"
using namespace std;


// -------------------------------------------------
//      We can change implementation without 
//              effecting interface
//
//  ในไฟล์นี้ เราเปลี่ยนการเปรียบเทียบเวลา โดยเปลี่ยน
//  จากการตรวจสอบค่าทีละตัวแปร hour, minute, second
//  มาเป็น การแปลงเป็นวินาทีก่อน แล้วค่อยเปรียบเทียบจาก
//  จำนวนวินาทีทั้งหมด 
//    ---> โดยที่ผลการเปรียบเทียบไม่เปลี่ยนแปลง
//    ---> ผลการรัน TimeMain.cpp ไม่เปลี่ยน
//    ---> และเราไม่ต้องแก้ไฟล์ TimeMain.cpp ด้วย
// 
// -------------------------------------------------

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
	return toSecond() == t.toSecond();
}
bool Time::operator!=(const Time &t) const {
	return toSecond() != t.toSecond();
}
bool Time::operator<(const Time &t) const {
	return toSecond() < t.toSecond();
}
bool Time::operator<=(const Time &t) const {
	return toSecond() <= t.toSecond();
}
bool Time::operator>(const Time &t) const {
	return toSecond() > t.toSecond();
}
bool Time::operator>=(const Time &t) const {
	return toSecond() >= t.toSecond();
}

Time &Time::operator+(const Time &t) const {
	int totalSec = this->toSecond() + t.toSecond();

	Time *result = new Time();
	result->setTimeFromSecond(totalSec);
	return *result;
}

// -----------------------------------
//    Unary Operator Overload 
// -----------------------------------
Time &Time::operator++() { // prefix increment operator
	int totalSec = toSecond() + 1;
	setTimeFromSecond(totalSec);
	return *this;
}
Time Time::operator++(int) { // postfix increment operator
	Time temp = *this;
	int totalSec = toSecond() + 1;
	setTimeFromSecond(totalSec);
	return temp;
}
Time &Time::operator+=(int s) {
	int totalSec = toSecond() + s;
	setTimeFromSecond(totalSec);
	return *this;
}

int Time::toSecond() const {
	return (hour * 3600) + (minute * 60) + second;
}

void Time::setTimeFromSecond(int totalSec) {
	this->hour = totalSec / 3600;
	int leftOver = totalSec % 3600;
	this->minute = leftOver / 60;
	this->second = leftOver % 60;
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





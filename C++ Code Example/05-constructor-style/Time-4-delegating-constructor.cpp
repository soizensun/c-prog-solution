#include <iostream>
using namespace std;

// Time class definition
class Time {
public:

	// -------------------------------------------
	// 4. delegating constructor (work only in C++11)
	//
	//    - ส่งให้ constructor อื่นทำงานแทน
	//
	Time()
		: Time(0, 0, 0) {
	}

	Time(int h)
		: Time(h, 0, 0) {
	}

	Time(int h, int m)
		: Time(h, m, 0) {
	}

	Time(int h, int m, int s) {
		setTime(h, m, s);
	}
	// -------------------------------------------
	void setTime(int h, int m, int s) {
		if ((0 <= h && h <= 23) &&
			(0 <= m && m <= 59) &&
			(0 <= s && s <= 59)) {
			hour = h;
			minute = m;
			second = s;
		}
	}
	string getUniversalFormat() const {
		string s = "";

		s = (hour < 10 ? "0" : "") + to_string(hour) + 
			(minute < 10 ? ":0" : ":") + to_string(minute) +
			(second < 10 ? ":0" : ":") + to_string(second);

		return s;
	}

	string getStandardFormat() const {
		string s = "";

		s = ((hour == 0 || hour == 12)? "12" : to_string(hour%12)) +
			(minute < 10 ? ":0" : ":") + to_string(minute) +
			(second < 10 ? ":0" : ":") + to_string(second) +
			(hour < 12 ? " AM" : " PM");

		return s;
	}

private:
	unsigned int hour;    // 0 - 23
	unsigned int minute;  // 0 - 59
	unsigned int second;  // 0 - 59
}; // end class Time


int main() {
	Time t1;             // all default arguments
	Time t2(2);          // minute, seconds use default
	Time t3(21, 34);     // second uses default
	Time t4(12, 25, 42); // all specified

	cout << t1.getUniversalFormat() << endl;
	cout << t2.getUniversalFormat() << endl;
	cout << t3.getUniversalFormat() << endl;
	cout << t4.getUniversalFormat() << endl;
}
#include <iostream>
using namespace std;

// Time class definition
class Time {
public:

	// -------------------------------------------
	// 2. constructor using member-initializer list
	//
	//    - member-initializer list is more efficient
	//      than assigning data members within 
	//      constructor body.
	//
	Time()
		: hour(0), minute(0), second(0) {
	}

	Time(int h, int m, int s)
		: hour(h), minute(m), second(s) {
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
	Time t1, t2(8, 30, 5);

	cout << t1.getUniversalFormat() << endl;
	cout << t1.getStandardFormat() << endl;;

	cout << t2.getUniversalFormat() << endl;
	cout << t2.getStandardFormat() << endl;
}
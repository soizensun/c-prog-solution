#include <iostream>
using namespace std;

// Time class definition
class Time {
public:

	// -------------------------------------------
	// 3. constructor with default arguments
	//
	//    - ทำให้เรียก constructor ได้หลายแบบ โดยใช้
	//      โค้ดเดียวกัน
	//

	Time(int hour = 0, int minute = 0, int second = 0){
		setTime(hour, minute, second);
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
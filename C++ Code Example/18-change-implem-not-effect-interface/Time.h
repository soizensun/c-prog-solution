#include <string>

#ifndef TIME_H
#define TIME_H

class Time {

	friend std::ostream &operator<<(std::ostream &output, const Time &t);

public:
	Time(int = 0, int = 0, int = 0);

	void setTime(int, int, int);

	bool operator==(const Time &t) const;
	bool operator!=(const Time &t) const;
	bool operator<(const Time &t) const;
	bool operator<=(const Time &t) const;
	bool operator>(const Time &t) const;
	bool operator>=(const Time &t) const;

	Time &operator+(const Time &t) const;

	Time &operator++(); // prefix increment operator
	Time operator++(int); // postfix increment operator
	Time &operator+=(int s);

	std::string getUniversalFormat() const;
	std::string getStandardFormat() const;

private:
	unsigned int hour;    // 0 - 23
	unsigned int minute;  // 0 - 59
	unsigned int second;  // 0 - 59

	// -----------------------------------
	// helper method / utility method
	//   - used only within class to prevent
	//     duplicated code
	//   - ใช้แค่ในคลาส จึงเป็น private ช่วยให้
	//     ไม่เกิดโค้ดซ้ำซ้อน
	// -----------------------------------
	int toSecond() const;
	void setTimeFromSecond(int totalSec);

}; 


#endif
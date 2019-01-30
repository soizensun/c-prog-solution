// Time.h
// Time class definition
// Member functions are defined in Time.cpp

#include <string>

// Time class definition
class Time {
public:
	Time(int = 0, int = 0, int = 0);

	void setTime(int, int, int);

	std::string getUniversalFormat() const;
	std::string getStandardFormat() const;

private:
	unsigned int hour;    // 0 - 23
	unsigned int minute;  // 0 - 59
	unsigned int second;  // 0 - 59
}; // end class Time


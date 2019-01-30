#include <string>

#ifndef TIME_H
#define TIME_H


// Time class definition
class Time {

    // -----------------------------------
    //  Stream Insertion Operator Overload
    // -----------------------------------
	friend std::ostream &operator<<(std::ostream &output, const Time &t);

public:
	Time(int = 0, int = 0, int = 0);

	void setTime(int, int, int);

	// -----------------------------------
	//    Binary Operator Overload 
	// -----------------------------------
	bool operator==(const Time &t) const;
	bool operator!=(const Time &t) const;
	bool operator<(const Time &t) const;
	bool operator<=(const Time &t) const;
	bool operator>(const Time &t) const;
	bool operator>=(const Time &t) const;

	Time &operator+(const Time &t) const;

	// -----------------------------------
	//    Unary Operator Overload 
	// -----------------------------------
	Time &operator++(); // prefix increment operator
	Time operator++(int); // postfix increment operator
	Time &operator+=(int s);

	std::string getUniversalFormat() const;
	std::string getStandardFormat() const;

private:
	unsigned int hour;    // 0 - 23
	unsigned int minute;  // 0 - 59
	unsigned int second;  // 0 - 59
}; // end class Time


#endif
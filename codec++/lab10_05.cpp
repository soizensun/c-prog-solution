#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;


string to_string(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}

class Time{
public:
	// constructor
	Time(int hour, int minute, int second){
		this->hour = hour,
		this->minute = minute;
		this->second = second;
	}
	// overload constructor
	Time(int duration){
		second = duration;
	}

	// set and get methods
	int getHour() const{ return hour; }
	int getMinute() const{ return minute; }
	int getSecond() const{ return second; }
	void setHour(int h){ hour = h; }
	void setMinute(int m){ minute = m; }
	void setSecond(int s){ second = s; }

	int getDuration() const{
		return (3600 * hour) + (60 * minute) + second;
	}

	Time add(Time other) const{
		Time time;
		time.hour = hour + other.hour;
		time.minute = minute + other.minute;
		time.second = second + other.second;
		return time;
	}

	int subtract(Time other) const{
		int a = (3600 * hour) + (60 * minute) + second;
		int b = (3600 * other.hour) + (60 * other.minute) + other.second;
		if (a == b){
			return 0;
		}
		else if (a > b){
			return a - b;
		}
		else if (a < b){
			return 86400 - (a - b);
		}
	}

	int equals(Time other) const{
		if(other.hour == hour && other.minute == minute && other.second == second)
			return 1;
		else return 0;
	}

	string toString() const{
		string s;
		s = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
		return s;
	}

private:
	int hour;
	int minute;
	int second;
};
int main(){
	cout << "hello";
}
#ifndef DAILYEMPLOYEE_H
#define DAILYEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class DailyEmployee : public Employee {

public:
	DailyEmployee(std::string name, double dailyWage, int day);

	void setDailyWage(double wage);
	double getDailyWage() const;
	void setDay(int day);
	int getDay() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	int day;
	double dailyWage;
};

#endif
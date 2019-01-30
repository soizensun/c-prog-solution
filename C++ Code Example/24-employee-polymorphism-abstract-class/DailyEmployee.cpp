#include <iostream>
#include "DailyEmployee.h"
using namespace std;


DailyEmployee::DailyEmployee(string name, double dailyWage, int day)
	: Employee(name), dailyWage(dailyWage), day(day) {}

void DailyEmployee::setDailyWage(double wage) { dailyWage = wage; }
double DailyEmployee::getDailyWage() const { return dailyWage; }
void DailyEmployee::setDay(int day) { this->day = day; }
int DailyEmployee::getDay() const { return day; }

double DailyEmployee::earnings() const {
	return day*dailyWage;
}
void DailyEmployee::print() const {
	cout << "------ Daily Employee ------" << endl;
	Employee::print();
	cout << "Daily wage: " << dailyWage << endl;
	cout << "Days worked: " << day << endl;
}
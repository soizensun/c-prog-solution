#include <iostream>
#include "SaleSalaryEmployee.h"
using namespace std;

SaleSalaryEmployee::SaleSalaryEmployee(string name, double saleAmount, double rate, double salary)
	: name(name), saleAmount(saleAmount), rate(rate), salary(salary) {}

void SaleSalaryEmployee::setName(string name) {
	this->name = name;
}
string SaleSalaryEmployee::getName() const {
	return name;
}

void SaleSalaryEmployee::setSaleAmount(double saleAmount) {
	this->saleAmount = saleAmount;
}
double SaleSalaryEmployee::getSaleAmount() const {
	return saleAmount;
}

void SaleSalaryEmployee::setRate(double rate) {
	this->rate = rate;
}
double SaleSalaryEmployee::getRate() const {
	return rate;
}

void SaleSalaryEmployee::setSalary(double salary) {
	this->salary = salary;
}
double SaleSalaryEmployee::getSalary() const {
	return salary;
}

double SaleSalaryEmployee::earnings() const {
	return salary + (saleAmount * rate);
}

#include <iostream>
#include "SaleEmployee.h"
#include "SalaryEmployee.h"
using namespace std;

SaleEmployee::SaleEmployee(string name, double salary, double saleAmount, double rate)
	: SalaryEmployee(name, salary), saleAmount(saleAmount), rate(rate) {
}

void SaleEmployee::setSaleAmount(double saleAmount) {
	this->saleAmount = saleAmount;
}
double SaleEmployee::getSaleAmount() const {
	return saleAmount;
}

void SaleEmployee::setRate(double rate) {
	this->rate = rate;
}
double SaleEmployee::getRate() const {
	return rate;
}

double SaleEmployee::earnings() const {
	return getSalary() + getSaleAmount() * getRate();
}

void SaleEmployee::print() const {
	cout << "------ Sale Employee ------" << endl;
	Employee::print();
	cout << "Salary: " << getSalary() << endl;
	cout << "Sale Amount: " << getSaleAmount() << endl;
	cout << "Rate: " << getRate() << endl;
}
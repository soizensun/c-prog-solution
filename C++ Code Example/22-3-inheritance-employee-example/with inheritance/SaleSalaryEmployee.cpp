#include <iostream>
#include "SaleSalaryEmployee.h"
using namespace std;

SaleSalaryEmployee::SaleSalaryEmployee(string name, double saleAmount, double rate, double salary)
	: SaleEmployee(name, saleAmount, rate) {
		this->salary = salary;
	}

void SaleSalaryEmployee::setSalary(double salary) {
	this->salary = salary;
}
double SaleSalaryEmployee::getSalary() const {
	return salary;
}

double SaleSalaryEmployee::earnings() const {
	return getSalary() + (getSaleAmount() * getRate());
	// หรือเชียนเป็น
	// return getSalary() + SaleEmployee::earnings();
}

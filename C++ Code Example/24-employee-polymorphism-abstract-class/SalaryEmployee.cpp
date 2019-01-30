#include <iostream>
#include "SalaryEmployee.h"
using namespace std;


SalaryEmployee::SalaryEmployee(string name, double salary) 
	: Employee(name), salary(salary) {
}

void SalaryEmployee::setSalary(double salary) {
	this->salary = salary;
}

double SalaryEmployee::getSalary() const {
	return salary;
}

double SalaryEmployee::earnings() const {
	return salary;
}

void SalaryEmployee::print() const {
	cout << "------ Salary Employee ------" << endl;
	Employee::print();
	cout << "Salary: " << getSalary() << endl;
}

#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class SalaryEmployee : public Employee {

public:
	SalaryEmployee(std::string name, double salary);

	void setSalary(double salary);
	double getSalary() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	double salary;
};

#endif
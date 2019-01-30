#ifndef SALESALARYEMPLOYEE_H
#define SALESALARYEMPLOYEE_H

#include <string>
#include "SaleEmployee.h"

class SaleSalaryEmployee : public SaleEmployee {

public:
	SaleSalaryEmployee(std::string name, double sale, double rate, double salary);

	void setSalary(double salary);
	double getSalary() const;

	double earnings() const;

private:
	double salary;
};

#endif
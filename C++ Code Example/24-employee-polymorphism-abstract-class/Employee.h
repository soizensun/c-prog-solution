#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Employee.h"

class Employee {

public:
	Employee(std::string name);

	void setName(std::string name);
	std::string getName() const;

	virtual double earnings() const = 0;
	virtual void print() const;

private:
	std::string name;
};

#endif
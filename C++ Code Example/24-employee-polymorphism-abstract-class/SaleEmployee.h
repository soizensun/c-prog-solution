#ifndef SALEEMPLOYEE_H
#define SALEEMPLOYEE_H

#include <iostream>
#include "SalaryEmployee.h"

class SaleEmployee : public SalaryEmployee {

public:
	SaleEmployee(std::string name, double salary, double sale, double rate);

	void setSaleAmount(double saleAmount);
	double getSaleAmount() const;

	void setRate(double rate);
	double getRate() const;

	double earnings() const;
	void print() const;

private:
	double saleAmount;
	double rate;
};

#endif
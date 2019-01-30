#ifndef SALESALARYEMPLOYEE_H
#define SALESALARYEMPLOYEE_H

#include <string>

class SaleSalaryEmployee {

public:
	SaleSalaryEmployee(std::string name, double sale, double rate, double salary);

	void setName(std::string name);
	std::string getName() const;

	void setSaleAmount(double saleAmount);
	double getSaleAmount() const;

	void setRate(double rate);
	double getRate() const;

	void setSalary(double salary);
	double getSalary() const;

	double earnings() const;

private:
	std::string name;
	double saleAmount;
	double rate;
	double salary;
};

#endif
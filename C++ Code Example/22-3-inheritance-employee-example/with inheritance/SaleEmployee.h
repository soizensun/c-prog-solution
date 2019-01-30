#ifndef SALEEMPLOYEE_H
#define SALEEMPLOYEE_H

#include <string>

class SaleEmployee {

public:
	SaleEmployee(std::string name, double sale, double rate);

	void setName(std::string name);
	std::string getName() const;

	void setSaleAmount(double saleAmount);
	double getSaleAmount() const;

	void setRate(double rate);
	double getRate() const;

	double earnings() const;

private:
	std::string name;
	double saleAmount;
	double rate;
};

#endif
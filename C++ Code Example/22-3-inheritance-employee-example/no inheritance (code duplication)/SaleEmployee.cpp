#include <iostream>
#include "SaleEmployee.h"
using namespace std;

SaleEmployee::SaleEmployee(string name, double saleAmount, double rate)
	: name(name), saleAmount(saleAmount), rate(rate) {}

void SaleEmployee::setName(string name) {
	this->name = name;
}
string SaleEmployee::getName() const {
	return name;
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
	return saleAmount * rate;
}

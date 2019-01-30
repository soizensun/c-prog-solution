#include <iostream>
#include "Employee.h"
using namespace std;


Employee::Employee(string name) 
	: name(name) {}

void Employee::setName(string name) {
	this->name = name;
}

string Employee::getName() const {
	return name;
}

void Employee::print() const {
	cout << "Name: " << getName() << endl;
}

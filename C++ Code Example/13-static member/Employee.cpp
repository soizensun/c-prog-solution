#include <iostream>
#include "Employee.h"
using namespace std;

// ---------------------------------------
// static variable
// ---------------------------------------
int Employee::count = 0;

// ---------------------------------------
// static method / static member function
// ---------------------------------------
int Employee::getCount() {
	return count;
}

Employee::Employee(string name, int salary)
	: name(name), salary(salary) {

	++count;

	cout << toString() << " constructor is called" << endl;
}

Employee::~Employee() {
	--count;

	cout << toString() << " DESTRUCTOR is called" << endl;
}

string Employee::getName() const { return name; }
int Employee::getSalary() const { return salary; }
string Employee::toString() const { return name + ":" + to_string(salary); }

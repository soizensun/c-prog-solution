#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	
	cout << "--No of Employees = " << Employee::getCount() << endl;

	{
		Employee e1("Fah", 10000);
		cout << "--No of Employees = " << Employee::getCount() << endl;
		
		Employee e2("Din", 12000);
		cout << "--No of Employees = " << Employee::getCount() << endl;
	}

	cout << "--No of Employees = " << Employee::getCount() << endl;
}
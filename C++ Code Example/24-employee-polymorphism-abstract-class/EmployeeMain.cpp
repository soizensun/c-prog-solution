#include <iostream>
#include "SaleEmployee.h"
#include "DailyEmployee.h"
using namespace std;

void polyViaPointer(Employee * baseClassPtr);
void polyViaRef(Employee &baseClassPtr);

int main() {
	
	Employee **employees = new Employee*[5];

	employees[0] = new SalaryEmployee("Kate", 15000);
	employees[1] = new SaleEmployee("Brian", 10000, 4000, 0.2);
	employees[2] = new SaleEmployee("Sofie", 8000, 20000, 0.2);
	employees[3] = new SalaryEmployee("Matt", 18000);
	employees[4] = new DailyEmployee("Gary", 300, 30);

	cout << "\n***** Polymorphism via pointer *****" << endl;
	for (int i = 0; i < 5; ++i) {
		polyViaPointer(employees[i]);
	}

	cout << "\n***** Polymorphism via reference *****" << endl;
	for (int i = 0; i < 5; ++i) {
		polyViaRef(*employees[i]);
	}
}

void polyViaPointer(Employee * baseClassPtr) {
	baseClassPtr->print();
	cout << "Earnings: " << baseClassPtr->earnings() << endl; 
}

void polyViaRef(Employee &baseClassPtr) {
	baseClassPtr.print();
	cout << "Earnings: " << baseClassPtr.earnings() << endl; 
}
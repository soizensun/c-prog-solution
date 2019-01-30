#include <iostream>
#include "SaleEmployee.h"
#include "SaleSalaryEmployee.h"
using namespace std;

int main() {
	
	SaleEmployee e1("Fah", 10000, 0.5);
	cout << e1.getName() << " has earnings " << e1.earnings() << endl;

	SaleSalaryEmployee e2("Din", 10000, 0.2, 4000);
	cout << e2.getName() << " has earnings " << e2.earnings() << endl;
}
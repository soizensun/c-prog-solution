#include <iostream>
#include "Account.h"
using namespace std;

int main() {

	Account a1("Kwan", "1"), a2("Korn", "2");

	a1.deposit(500);
	a1.withdraw(100);

	cout << a1.getName() << " has " <<
	a1.getBalance() << " Bahts."<< endl;

	a1.withdraw(100000);

	cout << a1.getName() << " has " <<
	a1.getBalance() << " Bahts."<< endl;

	a2.deposit(300);

	cout << a2.getName() << " has " <<
	a2.getBalance() << " Bahts."<< endl;

}



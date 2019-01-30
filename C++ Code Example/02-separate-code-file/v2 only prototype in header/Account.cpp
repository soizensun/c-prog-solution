#include <string>
#include "Account.h"
using namespace std;

// ------------------------------------------
//        implementation of class Account
// ------------------------------------------

Account::Account(string n, string i) {
	name = n;
	id = i;
	balance = 0;
}

// mutator
void Account::deposit(double amount) {
	balance += amount;
}
void Account::withdraw(double amount) {
	if (balance >= amount) {
		balance -= amount;
	}
}

// accessor
double Account::getBalance() const { 
	return balance; 
}
string Account::getName() const { 
	return name; 
}
string Account::getId() const { 
	return id; 
}



#include <iostream>
using namespace std;

// Account class definition
class Account {

public:
	Account(string n, string i) {
		name = n;
		id = i;
		balance = 0;
	}

	// mutator
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		if (balance >= amount) {
			balance -= amount;
		}
	}

	// accessor
	double getBalance() const { return balance; }
	string getName() const { return name; }
	string getId() const { return id; }

private:
	string name;
	string id;
	double balance;

}; // end class definition

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



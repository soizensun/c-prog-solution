#include <string>
// should not have using namespace in .h file

// Account class definition
class Account {

public:
	Account(std::string n, std::string i) {
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
	std::string getName() const { return name; }
	std::string getId() const { return id; }

private:
	std::string name;
	std::string id;
	double balance;

}; // end class definition


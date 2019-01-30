#include <string>
// should not have using namespace in .h file

// ------------------------------------------
//   interface of class Account
//     - define class's interface with 
//       function/method prototypes
//     - separate implementation from interface
// ------------------------------------------
class Account {

public:
	Account(std::string n, std::string i);

	// mutator
	void deposit(double amount);
	void withdraw(double amount);

	// accessor
	double getBalance() const;
	std::string getName() const;
	std::string getId() const;

private:
	std::string name;
	std::string id;
	double balance;

}; 


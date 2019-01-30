#include <iostream>
using namespace std;

class Account {

public:
	Account(string name) 
		: name(name), balance(0) {
	}

	void deposit(double amount) {
		balance += amount;
	}

	// -----------------------------------
	//   เมธอดจะมองไม่เห็น class-scope variable หากเราประกาศ
	//   block-scope variable ด้วยชื่อเดียวกัน
	//     (เมธอดจะเห็นได้เมื่อใช้ this)
	// -----------------------------------
	void withdraw(double balance) {
		balance -= balance;
	}
	double getBalance() const { return balance; }
	string getName() const { return name; }

private:
	string name;
	double balance;
};

int main() {

	// a1 has scope anywhere within main() function body
	Account a1("A1");
	a1.deposit(100);
	cout << a1.getName() << " has " << a1.getBalance() << endl;
	a1.withdraw(30);
	cout << a1.getName() << " has " << a1.getBalance() << endl;

	int x;
	cin >> x;
	if (x > 0) {

		// a2 has scope only within if clause
		Account a2("A2");
		a2.deposit(500);
		cout << a2.getName() << " has " << a2.getBalance() << endl;
	}

	cout << a1.getName() << " has " << a1.getBalance() << endl;

	// cannot use a2 because it is out of scope
	cout << a2.getName() << " has " << a2.getBalance() << endl;
}





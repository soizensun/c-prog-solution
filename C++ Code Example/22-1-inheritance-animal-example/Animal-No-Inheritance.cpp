#include <iostream>
using namespace std;


// -------------------------------
//   No Inheritance
//     - โค้ดซ้ำซ้อนกัน
// -------------------------------

class Dog {
public:
	Dog(string n, int a)
		: name(n), age(a) {
	}

	string getName() { return name; }
	int getAge() { return age; }

	void eat(string food) { 
		cout << name << " is eating " << food << endl;
	}
	void sleep() { 
		cout << name << " is sleeping..." << endl;
	}
	void makeNoise() {
		cout << name << " is woofing" << endl;
	}

private:
	string name;
	int age;
};

class Cat {
public:
	Cat(string n, int a)
		: name(n), age(a) {
	}

	string getName() { return name; }
	int getAge() { return age; }

	void eat(string food) { 
		cout << name << " is eating " << food << endl;
	}
	void sleep() { 
		cout << name << " is sleeping..." << endl;
	}
	void makeNoise() {
		cout << name << " is meowing" << endl;
	}

private:
	string name;
	int age;
};

int main() {
	Dog toob("Toob", 4);
	Cat jee("Jee", 2);

	toob.makeNoise();
	toob.eat("pork ball");
	toob.sleep();

	cout << "------------" << endl;
	jee.makeNoise();
	jee.eat("platu");
	jee.sleep();

}


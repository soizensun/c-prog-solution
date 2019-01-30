#include <iostream>
using namespace std;



class Animal {
public:
	Animal(string n, int a)
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
		cout << name << " is ";
	}

protected:
	string name;
	int age;
};

class Dog : public Animal {
public:
	Dog(string n, int a)
		: Animal(n, a) {
	}

	void makeNoise() {
		// เรียกใช้ makenoise ของ base class
		Animal::makeNoise();
		cout << "woofing" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string n, int a)
		: Animal(n, a) {
	}

	void makeNoise() {
		// เรียกใช้ makenoise ของ base class
		// Animal::makeNoise();
		cout<< name << "meowing" << endl;
	}

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


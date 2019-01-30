#include <iostream>
using namespace std;

class Student {

public:
	Student(string n, int i) {
		name = n;
		id = i;
	}

	Student(string n, int i, string s) {
		name = n;
		id = i;
		setSex(s);
	}

	// mutator
	void setSex(string s) {
		if (s == "M" || s == "F") {
			sex = s;
		}
	}
	// accessor
	string getName() const {
		return name;
	}
	// accessor
	int getId() const {
		return id;
	}
	// accessor
	string getSex() const {
		return sex;
	}

	// accessor
	string toString() const {
		string s = "Student[name = " + name + 
			", id = " + to_string(id) + 
			", sex = " + sex + "]"; 
		return s;
	}

private:
	string name;
	int id;
	string sex;
};

int main() {

	// creating object s1, s2
	Student s1("Tanadol", 1, "M"), s2("Pas", 2);

	cout << s1.toString() << endl;
	cout << s2.getName() << endl;

	s2.setSex("M");
	cout << s2.toString() << endl;

	s2.setSex("A");
	cout << s2.toString() << endl;

}













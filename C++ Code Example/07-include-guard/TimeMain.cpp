#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main() {
	Time t;

	cout << t.getUniversalFormat() << endl;
	cout << t.getStandardFormat() << endl;

	t.setTime(13, 27, 6);

	cout << t.getUniversalFormat() << endl;
	cout << t.getStandardFormat() << endl;

	try {
		t.setTime(99, 99, 99);
	}
	catch (invalid_argument &e) {
		cerr << "\nException: " << e.what() << endl;
	}

	cout << t.getUniversalFormat() << endl;


}




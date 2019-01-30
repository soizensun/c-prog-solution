#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main() {

	// ----------------------------------------------------
	//                const object
	//    - const object can call only const member functions
	// ----------------------------------------------------
	const Time t;

	cout << t.getUniversalFormat() << endl;
	cout << t.getStandardFormat() << endl;

	// calls to setTime will have syntax errors when compile
	t.setTime(13, 27, 6);



}




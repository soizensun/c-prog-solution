#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main() {

	Time t1(13, 27, 6);
	Time t2 = t1;       // เรียก copy constructor ที่เราเขียนไว้

	cout << "T1: " << t1.getUniversalFormat() << endl;
	cout << "T2: " << t2.getUniversalFormat() << endl;


}




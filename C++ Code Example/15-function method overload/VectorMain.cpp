#include <iostream>
#include "Vector.h"
using namespace std;


int main() {

	Vector v1;
	cout << "V1: " << v1.toString() << endl;

	v1.offset(10,20);
	cout << "V1: " << v1.toString() << endl;

	v1.offset(1,2,3,4);
	cout << "V1: " << v1.toString() << endl;

	Vector v2(1000, 1000, 1000, 1000);
	v1.offset(v2);
	cout << "V1: " << v1.toString() << endl;
}


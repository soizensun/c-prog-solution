#include <iostream>
#include "Vector.h"
using namespace std;


int main() {

	Vector v1(1, 0, 2, 2);

	// ------ handle of object v1 ------
	//  1. object name: v1
	//  2. object referenct: myV1
	//  3. object pointer: v1Ptr
	// -------------------------------
	Vector &myV1 = v1;  // myV1 is a reference to object v1.
	Vector *v1Ptr = &v1; // v1Ptr is a pointer to object v1.
	Vector v2 = v1;  // copy object v1 into v2

	cout << "----- before ----" << endl;
	cout << "v1: " << v1.toString() << endl;
	cout << "myV1: " << myV1.toString() << endl;
	cout << "v1Ptr: " << v1Ptr->toString() << endl;
	cout << "v2: " << v2.toString() << endl;

	v1.offset(5, 5);
	cout << "----- change v1 ----" << endl;
	cout << "v1: " << v1.toString() << endl;
	cout << "myV1: " << myV1.toString() << endl;
	cout << "v1Ptr: " << v1Ptr->toString() << endl;
	cout << "v2: " << v2.toString() << endl;


	myV1.offset(10,10);
	cout << "----- change myV1 ----" << endl;
	cout << "v1: " << v1.toString() << endl;
	cout << "myV1: " << myV1.toString() << endl;
	cout << "v1Ptr: " << v1Ptr->toString() << endl;
	cout << "v2: " << v2.toString() << endl;



}


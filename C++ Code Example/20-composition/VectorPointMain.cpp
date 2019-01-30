#include <iostream>
#include <string>
#include "Vector.h"
#include "Point.h"
using namespace std;

// -------------------------------------------------------------------- //
int main() {
	Point p1(4,5), p2(10, 10);
	cout << "p1: "<< p1.toString() << endl;
	cout << "p2: "<< p2.toString() << endl;

	Vector v1, v2(p1, p2);
	cout << "v1: "<< v1.toString() << endl;
	cout << "v2: "<< v2.toString() << endl;

	v2.offset(5, 6);
	cout << "v2: "<< v2.toString() << endl;

	Point p3 = p1.add(p2);
	cout << "p3: "<< p3.toString() << endl;

	Vector v3 = v1.add(v2);
	cout << "v3: "<< v3.toString() << endl;
}

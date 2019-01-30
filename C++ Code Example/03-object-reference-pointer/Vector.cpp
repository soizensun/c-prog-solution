#include <string>
#include "Vector.h"
using namespace std;

Vector::Vector() {
	startX = 0;
	startY = 0;
	endX = 0;
	endY = 0;
}

Vector::Vector(int sx, int sy, int ex, int ey) {
	startX = sx;
	startY = sy;
	endX = ex;
	endY = ey;
}

// mutator method: modify data members
void Vector::offset(int dx, int dy) {
	startX += dx; 
	endX += dx;
	startY += dy;
	endY += dy;
}

// accessor method: do not modify data members
Vector Vector::add(Vector v2) const {
	Vector v;  // local variable

	v.startX = startX + v2.startX;
	v.startY = startY + v2.startY;
	v.endX = endX + v2.endX;
	v.endY = endY + v2.endY;

	return v;
}

// accessor method
string Vector::toString() const {
	string s = "(" + to_string(startX) + ", "
			   + to_string(startY) + ") -> ("
			   + to_string(endX) + ", "
			   + to_string(endY) + ")";
	return s;
}


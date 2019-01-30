#include <string>
#include "Vector.h"
#include "Point.h"
using namespace std;


Vector::Vector() {
}

Vector::Vector(const Point &s, const Point &e) 
	: start(s), end(e)
{
}

void Vector::offset(int dx, int dy) {
	start.offset(dx, dy);
	end.offset(dx, dy);
}	

Vector Vector::add(Vector v2) const {
	Vector v; 
	v.start = start.add(v2.start);
	v.end = end.add(v2.end);
	return v;
}

string Vector::toString() const {
	string s =  start.toString() + " -> "
			   + end.toString();
	return s;
}

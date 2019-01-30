#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string to_string(int i){
 	stringstream ss;
 	ss << i;
 return ss.str();
}


// -------------------------------------------------------
// A class is a user-defined type.
//
// A class can encapsulate data and method/function.
// 
// Method/function is one type of abstraction.
//
// Access modifier / access specifier
//    - private  can be accessed only within class
//    - public   anyone can access
//
// Naming convention: camel case
//   class: CamelCase
//   variable: camelCase
//   method: camelCase or CamelCase (but be consistent)
// -------------------------------------------------------

// Vector class definition
class Vector {
public:
	// --------------------------------------
	//               Constructor
	//
	//  - C++ calls constructor when creating/instatiating
	//    objects
	//  - Each class can have multiple constructors
	///   (constructor overload)
	// --------------------------------------
	Vector() {
		startX = 0;
		startY = 0;
		endX = 0;
		endY = 0;
	}

	Vector(int sx, int sy, int ex, int ey) {
		startX = sx;
		startY = sy;
		endX = ex;
		endY = ey;	
	}

	// --------------------------------------
	//     method, member function
	//	   operation, behavior
	// 
	// offset is a method of class Vector.
	// offset is a member function of class Vector.		
	// -------------------------------------- 

	// mutator method: modify data members
	void offset(int dx, int dy) {
		startX += dx; 
		endX += dx;
		startY += dy;
		endY += dy;
	}

	// accessor method: do not modify data members
	Vector add(Vector v2) const {
		Vector v;  // local variable

		v.startX = startX + v2.startX;
		v.startY = startY + v2.startY;
		v.endX = endX + v2.endX;
		v.endY = endY + v2.endY;

		return v;
	}

	// accessor method
	string toString() const {
		string s = "(" + to_string(startX) + ", "
				   + to_string(startY) + ") -> ("
				   + to_string(endX) + ", "
				   + to_string(endY) + ")";
		return s;
	}

private:  
	// -------------------------------- 
	//    member, data member, field,
	//    attribute, instance variable
	// 
	// startX is a member of class Vector.
	// startX is a field of class Vector.
	//
	// Attributes should be private.
	//
	//          Encapsulation
	// --------------------------------
	int startX;
	int startY;
	int endX;
	int endY;
};  // end class Vector

// -------------------------------------------------------------------- //

int main() {

	// v1 = (1,0) ----> (2,2)
	// v2 = (3,5) ----> (1,3)
	//
	// v1 is an object of class Vector.
	// v1 is an instance of class Vector.
	//
	// We create objects v1, v2 of class Vector.
	// We instantiate objects v1, v2 of class Vector.

	// When creating an object of class Vector, 
	// C++ will call a constructor in Vector.

	Vector v1(1, 0, 2, 2);
	Vector v2(3, 5, 1, 3);

	cout << v1.toString() << endl;
	cout << v2.toString() << endl;

	// v1 is an implicit parameter of method add.
	// v2 is an explicit parameter of method add.
	Vector v3 = v1.add(v2);
	cout << v3.toString() << endl;

	v3.offset(1, 1);
	cout << v3.toString() << endl;

	Vector v; // Vector is a user-defined type.
	int i;    // int is a primitive type.

}


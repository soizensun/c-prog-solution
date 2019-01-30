#include <iostream>
#include <string>
using namespace std;

// -------------------------------------
//   scope: ขอบเขตการใช้งาน การคงอยู่
//     - class scope ขอบเขตภายในคลาส
//     - block scope ขอบเขตภายใน block {}
//
//   variable คงอยู่ตาม scope การประกาศ
//     - class-scope variable เช่น attribute
//		   - can be accessed throughout class
//  	   - เข้าถึงได้จากทุกที่ในคลาส
//     - block-scope variable เช่น local variable, parameter
// 		   - ใช้ได้แค่ใน block ที่ประกาศเท่านั้น
// -------------------------------------


class Vector {
public:
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

	void offset(int dx, int dy) {
		startX += dx; 
		endX += dx;
		startY += dy;
		endY += dy;
	}

	Vector add(Vector v2) const {
		// -----------------------------------
		//   parameters and local variable are block-scope variable.
		//   - can be accessed only in that block
		//   - เข้าถึงได้จากแค่ใน { } ที่ประกาศไว้เท่านั้น
		// -----------------------------------
		Vector v;  // local variable, block-scope variable
				   // ดังนั้น ใช้ v ได้แค่ในเมธอด add เท่านั้น

		v.startX = startX + v2.startX;
		v.startY = startY + v2.startY;
		v.endX = endX + v2.endX;
		v.endY = endY + v2.endY;

		return v;
	}

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
	// attributes are class-scope variable. 
	//   - can be accessed throughout class
	//   - เข้าถึงได้จากทุกที่ในคลาส
	// --------------------------------
	int startX;
	int startY;
	int endX;
	int endY;
};

// ------------------------------------------------------------- //

int main() {

	Vector v1(1, 0, 2, 2);
	Vector v2(3, 5, 1, 3);

	cout << v1.toString() << endl;
	cout << v2.toString() << endl;

}


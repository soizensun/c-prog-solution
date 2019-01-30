#include <string>

class Vector {

public:
	// -------------------------------------
	// constructor overload
	//   - multiple constructor with 
	//     different parameters
	// -------------------------------------
	Vector();
	Vector(int sx, int sy, int ex, int ey);

	// -------------------------------------
	// method overload
	//   - multiple method with the
	//     same name, but
	//     different parameters
	// -------------------------------------
	void offset(int dx, int dy);
	void offset(int dsx, int dsy, int dex, int dey);
	void offset(Vector v);
	
	Vector add(Vector v2) const;
	std::string toString() const;

private:  
	int startX;
	int startY;
	int endX;
	int endY;
};  

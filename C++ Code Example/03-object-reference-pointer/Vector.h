#include <string>

class Vector {

public:
	Vector();
	Vector(int sx, int sy, int ex, int ey);

	// mutator method
	void offset(int dx, int dy);

	// accessor method
	Vector add(Vector v2) const;
	std::string toString() const;

private:  
	int startX;
	int startY;
	int endX;
	int endY;
};  

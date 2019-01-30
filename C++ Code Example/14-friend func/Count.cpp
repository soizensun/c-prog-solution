#include <iostream>
using namespace std;

class Count {

	// ------------------------------------------
	//  ประกาศ friend function ในคลาส
	//    - แต่เขียนโค้ด (implement) นอกคลาส
	// ------------------------------------------
	friend void setX(Count &c, int val);

public:
	Count() : x(0) {}
	
	int getX() const {
		return x;
	}

private:
	int x;
};

//--------------------------------------------
//  โค้ด friend function นอก class
//    - สามารถเข้าถึงตัวแปรและเมธอด private ได้
//--------------------------------------------
void setX(Count &c, int val) {
	c.x = val;
}

int main() {
	Count counter;  // create Count object
	cout << "\ncounter.x after instantiation: " 
	<< counter.getX() << endl;

	setX(counter, 8);  // set private x using friend function
	cout << "counter.x after friend func: " 
	<< counter.getX() << endl << endl;
}
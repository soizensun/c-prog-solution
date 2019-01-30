#include <iostream>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) 
		: x(x), y(y) {
	}

	void offset(int dx, int dy)  {
		x += dx;
		y += dy;
	}

	string toString() const {
		string s = "(" + to_string(x) + ", " +
					to_string(y) + ")";
		return s;
	}

private:
	int	x;
	int y;
};

int main() {
	//---------------------------------------------------
	//  หากต้องการใช้ pointer ของ object เราสามารถเขียนได้ 2 แบบ
	//---------------------------------------------------

	//---------------------------------------------------
	//  1. ประกาศออปเจ็คตามปกติ แล้วค่อยประกาศ pointer
	//---------------------------------------------------
	Point p1(1, 1);
	Point *p1Ptr = &p1;
	cout << p1Ptr->toString() << endl;

	//---------------------------------------------------
	//           2. Dynamic Memory Management
	//
	//     ให้ C++ จองพื้นที่หน่วยความจำใน Heap สำหรับเก็บออปเจ็ค
	//  โดยใช้คำสั่ง new
	//  *** เมื่อใช้เสร็จ จะตอ้งใช้คำสั่ง delete เพื่อคืน memory
	//---------------------------------------------------

	Point *p2Ptr = new Point(2, 2);
	cout << p2Ptr->toString() << endl;

	delete p2Ptr;
}




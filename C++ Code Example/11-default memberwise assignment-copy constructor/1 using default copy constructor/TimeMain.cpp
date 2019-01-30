#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main() {

	Time t1(13, 27, 6);
	Time t2 = t1;       // เมื่อ assign object แบบนี้ C++ จะเรียก copy constructor
						// โดย C++ จะสร้าง default copy constructor ให้อยู่แล้ว
						// ซึ่ง default copy constructor นี้ จะเป็นการ 
						// assign ค่าจากทุก member จาก t1 ให้ t2
						// เรียกว่า default memberwise assignment
						// 
						// หากต้องการ assign object แบบที่ต่างไป
						// เราสามารถสร้าง copy constructor ขึ้นมาเองได้

	cout << "T1: " << t1.getUniversalFormat() << endl;
	cout << "T2: " << t2.getUniversalFormat() << endl << endl;

	t2.setTime(14, 0, 0);
	cout << "T1: " << t1.getUniversalFormat() << endl;
	cout << "T2: " << t2.getUniversalFormat() << endl;

}




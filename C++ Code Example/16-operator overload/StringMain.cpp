#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

// -----------------------------------
//	method ต่าง ๆ ใน string
//	  - string มีเมธอดหลายอย่างให้ใช้ เช่น
//		  - empty : เช็คว่า string นี้ empty หรือไม่
//		  - substr : คืนค่าเป็น substring
//		  - at : คืนค่าเป็น char ตาม index ที่ระบุ
//
//    - นิสิตควรไปเรียนรู้เมธอดอื่น ๆ ของ 
//      string เพิ่มเติมเอง 
// -----------------------------------
int main() {

	string s1 = "";
	string s2 = "apple";
 
 	if (s1.empty()) {
 		cout << "s1 is empty" << endl;
 	}

 	string s3 = s2.substr(0, 2);
 	cout << "substr(0, 2) for apple is " << s3 << endl;

 	char c = s2.at(4);
 	cout << "at(4) for apple is " << c << endl;
}




#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

// -----------------------------------
//	operator overload 
//	  - operator หนึ่ง ๆ สามารถใช้กับข้อมูลหลากหลาย type ได้
//
//	  - ex. เครื่องหมาย + ใช้ได้กับทั้งตัวเลขและ string โดย
//	    + หมายถึง บวกเลข เมื่อใช้กับ int, double, float
//		+ หมายถึง เอา string มาต่อกัน เมื่อใช้กับ string
//
//	  - ex. เครื่องหมาย << ใช้ได้กับทั้ง int และ cout
//	    << หมายถึง shift เมื่อใช้กับ int
//		<< หมายถึง print เมื่อใช้กับ cout (stream)
//		
//    เรียนรู้ operator overload ด้วย string 
//
//    - string มี operator overload ที่ใช้ต่างกับ int 
//		เช่น +, ==, !=, >, <, >=, <=
//      - เช่น > ใช้การเปรียบเทียบตามการเรียงตัวอักษร
//      
// -----------------------------------

string toString(bool b);

int main() {

	// -----------------------------------
	//	+ operator overload 
	// -----------------------------------
	int x = 5;
	int y = 6;
	int z = x + y;

	string s1 = "apple";
	string s2 = "bacon";
	string s3 = s1 + " " + s2;

	cout << "-------- + overload ---------" << endl;
	cout << "int z = " << z << endl;
	cout << "string s3 = " << s3 << endl;

	// -----------------------------------
	//	<< operator overload 
	// -----------------------------------
	int a = 5;
	int b = a << 1;

	cout << "-------- << overload ---------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// -----------------------------------
	//	==, !=, >, <, >=, <= operator overload 
	// -----------------------------------
	cout << "------- equality/inequality in string ------" << endl;
	cout << s1 << " == " << s2 << " is " <<  toString(s1 == s2) << endl;
	cout << s1 << " != " << s2 << " is " << toString(s1 != s2) << endl;
	cout << s1 << " > " << s2 << " is " << toString(s1 > s2) << endl;
	cout << s1 << " < " << s2 << " is " << toString(s1 < s2) << endl;
	cout << s1 << " >= " << s2 << " is " << toString(s1 >= s2) << endl;
	cout << s1 << " <= " << s2 << " is " << toString(s1 <= s2) << endl;
 
}

string toString(bool b) {
	if (b) return "True";
	return "False";
}


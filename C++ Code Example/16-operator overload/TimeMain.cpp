#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

string toString(bool b);

int main() {

	Time t1(6, 5);
	Time t2(6, 20);

	cout << "t1 : " << t1.getUniversalFormat()<< endl;
	cout << "t2 : " << t2.getUniversalFormat() << endl;

    
    // --------------------------------------------------
    // การเรียกใช้ทั้งสองแบบให้ผลเหมือนกัน สามารถคอมไพล์และรันได้
    // --------------------------------------------------
    // t1 == t2
    // t1.operator==(t2)
    // --------------------------------------------------
    // cout << t1
    // operator<<(cout,t1);
    // --------------------------------------------------
    
	cout << "---------- stream insertion operator ------------" << endl;
	cout << "t1 : " << t1 << endl;
	cout << "t2 : " << t2 << endl;

	cout << "---------- equality/inequality operator ---------" << endl;
	cout << "(t1 == t2) is " << toString(t1 == t2) << endl;
	cout << "(t1 != t2) is " << toString(t1 != t2) << endl;
	cout << "(t1 < t2) is " << toString(t1 < t2) << endl;
	cout << "(t1 <= t2) is " << toString(t1 <= t2) << endl;
	cout << "(t1 > t2) is " << toString(t1 > t2) << endl;
	cout << "(t1 >= t2) is " << toString(t1 >= t2) << endl;

	cout << "---------- increment operator ------------" << endl;
	cout << "before t1++ : " << (t1++).getUniversalFormat() << endl;	
	cout << "after t1++ : " << t1.getUniversalFormat() << endl;	

	cout << "++t1 : " << (++t1).getUniversalFormat() << endl;

	t1 += 5;
	cout << "t1+=5 : " << t1.getUniversalFormat() << endl;	

	cout << "---------- add operator ------------" << endl;
	cout << "t1 : " << t1.getUniversalFormat() << endl;
	cout << "t2 : " << t2.getUniversalFormat() << endl;	

	Time &t3 = t1 + t2;
	cout << "t3 = t1 + t2 : " << t3.getUniversalFormat() << endl;
}

string toString(bool b) {
	if (b) return "True";
	return "False";
}


#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

string toString(bool b);

int main() {

	Time t1(6, 5, 59);
	cout << "t1 : " << t1 << endl;
	cout << "before t1++ : " << t1++ << endl;	
	cout << "after t1++ : " << t1 << endl;	
	cout << "-----------------------------------" << endl;

	Time t2(6, 59, 59);
	cout << "t2 : " << t2 << endl;
	cout << "++t2 : " << ++t2 << endl;
	cout << "-----------------------------------" << endl;

	Time t3(6, 59, 59);
	cout << "t3 : " << t3 << endl;

	t3 += 5;
	cout << "t3+=5: " << t3 << endl;
	cout << "-----------------------------------" << endl;

	Time t4(6, 5, 8), t5(4, 10, 20);
	cout << "t4 : " << t4 << endl;
	cout << "t5 : " << t5<< endl;	
	Time &t6 = t4 + t5;
	cout << "t6 = t4 + t5 : " << t6 << endl;

}

string toString(bool b) {
	if (b) return "True";
	return "False";
}




#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main() {


// -----------------------------------
//    Destructor 
//    - Destructor is called in reverse order of
//      constructor
// -----------------------------------

	Time t1(1);
	Time t2(2);

	{
		Time t3(3);
		Time t4(4);
	} 

	Time t5(5);
}




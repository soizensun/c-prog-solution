#include <iostream>
using namespace std;

class Rational {
private:
	int a;
	int b;
public:
	Rational(int aa = 0, int bb = 1){
		a = aa;
		b = bb;
	}

	void print(){
		if (a % b == 0) cout << a/b << endl;
		else if(b != 1) cout << a << "/" << b << endl;
		else cout << a << endl;
	}

	bool equals(Rational other){
		if( (a == other.a) && (b == other.b) ) return true;
		else return false;
	}

	void add(int c, int d){
		if(b == d){
			cout << a+c << "/" << b << endl;
		}
		else{
			int aa, bb;
			aa = (a*d) + (b*c);
			bb = b*d;
			if(bb != 0) cout << aa << "/" << bb << endl;
			else cout << aa << endl;			
		}
	}

	void subtract(int c, int d){
		if(b == d){
			cout << a-c << "/" << b << endl;
		}
		else{
			int aa, bb;
			aa = (a*d) - (b*c);
			bb = b*d;
			if(bb != 0) cout << aa << "/" << bb << endl;
			else cout << aa << endl;			
		}		
	}
	void multiply(int c, int d){
		int aa, bb;
		aa = a * c; bb = b * d;
		cout << aa << "/" << bb << endl;
	}

	void divide(int d, int c){
		multiply(c, d);
	}
};

int main(){
	Rational r1(1,7);
	Rational r2(3,1);
	Rational r3(5);
	Rational r4(0,3);
	Rational r5(3,0);
	r1.print();
	r2.print();
	r3.print();
	r4.print();
	r5.print();
	r1.add(5,7);
	r1.add(1,8);
	r1.subtract(1,8);
	r1.multiply(2,8);
	r1.divide(2,8);
	cout << r1.equals(r2) << endl;

}


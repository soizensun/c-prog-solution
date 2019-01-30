#include <iostream>
using namespace std;
////////////////////////////////////
#include <sstream>

string to_string(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}
string to_string(float i){
	stringstream ss;
	ss << i;
	return ss.str();
}
///////////////////////////////////
class Complex {
friend ostream &operator<<(ostream &out, Complex x);
friend Complex operator+(float a, Complex x);
friend Complex operator-(float a, Complex x);
private:
	float real;
	float imaginary;
public:
	Complex(float r = 0, float i = 0){
		real = r;
		imaginary = i;
	}
	string toString(){   
		int a = real,b=imaginary;
	  	if(real != 0 && imaginary !=0)
	    	return ( a != real ? to_string(real):to_string(a) ) + (imaginary>0 ? "+":"") + (imaginary == 1 || -imaginary==1 ? (imaginary<0 ? "-":""):(b == imaginary ? to_string(b):to_string(imaginary) )) + "i";
	  	if(imaginary == 0)
	    	return ( a != real ? to_string(real):to_string(a) );
	  	if(real == 0)
	    	return (imaginary == 1 || -imaginary == 1 ? (imaginary>0 ? "":"-"): (b == imaginary ? to_string(b):to_string(imaginary) )) + "i";
	}
	Complex operator+(Complex r){
		return Complex(real + r.real, imaginary + r.imaginary);
	}

	Complex operator-(Complex r){
		return Complex(real - r.real, imaginary - r.imaginary);
	}
};

ostream &operator<<(ostream &out, Complex x){
	out << x.toString();
	return out;
}
Complex operator+(float a, Complex x){
	return Complex(a + x.real, x.imaginary);
}
Complex operator-(float a, Complex x){
	return Complex(a - x.real, x.imaginary);
}


int main(){
	Complex z1 = Complex(1, 1);
	Complex z2 = Complex(3.5, 6.6);
	cout << z1.toString() << endl;
	cout << z2.toString() << endl;
	cout << Complex().toString() << endl;
	cout << z1 << endl;
	cout << z1 + z1 << endl;
	cout << z2 - z1 << endl;
	cout << z1 - Complex(2, 1) << endl;
	cout << Complex(10, 10) + 14 << endl; 
	cout << 12 + Complex(0, -7) << endl;
	cout << Complex(10, 10) - 14 << endl;
	cout << 20.2 - Complex(10, 10) << endl;
}
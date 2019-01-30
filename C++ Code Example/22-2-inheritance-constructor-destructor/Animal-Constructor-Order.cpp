#include <iostream>
using namespace std;

//-------------------------------------------
//    การเรียก constructor และ destructor 
//       ใน inheritance hierarchy
//-------------------------------------------
//  - เมื่อจะสร้างออปเจ็คของ derived class 
//    constructor ของทุก base class ของมันจะ
//    ถูกเรียกทั้งหมดด้วยแบบลูกโซ่ 
//
//    โดยเมื่อสร้างออปเจ็ค C++ จะเรียก constructor 
//    ของ derived class นั้น ๆ ก่อน แล้วจึง
//    เรียก constructor ของ direct base class 
//    ของมัน ซึ่งก็จะเรียก constructor ของ
//    base class ของมันต่อ จนถึงไปถึงระดับสูงสุด
//
//    เมื่อถึงระดับสูงสุดแล้ว โค้ดใน constructor ของ
//    ระดับสูงสุดจะทำงาน เมื่อเสร็จ ชั้นถัดมาก็จะทำงาน
//    จนมาถึง constructor ของ derived class ที่
//    ถูกสร้าง ก็จะเสร็จสิ้นกระบวนการ
//
//  - เราสามารถเขียนโปรแกรมให้ constructor ของ
//    derived class ไปเรียก constructor ของ
//    direct based class มันได้ เช่น
//    
//    class Dog : public LandAnimal {
//    public:
//        Dog(string name) 
//			: LandAnimal(name) { }
//      ....
//	  }
//  - หากเรียกไม่เรียกเอง C++ จะเรียก constructor 
//    ของ direct base class โดยอัตโนมัติให้ โดยจะ
//    เรียก constructor แบบไม่มี parameter เช่น 
//    
//    class Dog : public LandAnimal {
//    public:
//        Dog(string name) { 
//        }
//      ....
//	  }
//    หากเขียนโค้ดแบบด้านบน C++ จะเรียน constructor
//    LandAnimal() แบบไม่มี parameter ให้อัตโนมัติ
//    *** ซึ่งถ้า LandAnimal ไม่มี constructor แบบ
//    ไม่มี parameter ก็จะเกิด compile error
//
//  - สำหรับ destructor นั้น C++ ก็จะเรียก destructor
//    ของคลาสนั้น และ destructor ของทุก base class ด้วย
//    แบบลูกโซ่ โดยลำดับจะตรงกันข้ามกับ constructor
//    โดย destructor ของ derived class ก็จะทำงานก่อน
//	  และ destructor ของ base class ชั้นบนสุด ก็จะ 
//	  ทำงานสุดท้าย
//-------------------------------------------

class Animal {
public:
	Animal() {
		// base class ชั้นบนสุด จะถูกทำงานก่อน
		cout << "Animal constructor" << endl;
	}
	~Animal() {
		cout << "Animal DESTRUCTOR" << endl;	
	}

	string getName() { return name; }
	int getAge() { return age; }

	void eat(string food) { 
		cout << name << " is eating " << food << endl;
	}
	void sleep() { 
		cout << name << " is sleeping..." << endl;
	}
	void move() {
		cout << name << " is moving " << endl;
	}
	void makeNoise() {
		cout << name << " is making noise" << endl;
	}

private:
	string name;
	int age;
};

class LandAnimal : public Animal {
public:
	LandAnimal() {
		// C++ จะเรียก constructor ของ Animal โดยอัตโนมัติ 
		// ถ้าเราไม่ได้เขียนโค้ดเรียกเอง
		cout << "LandAnimal constructor" << endl;
	}
	~LandAnimal() {
		cout << "LandAnimal DESTRUCTOR" << endl;	
	}

	void move() {
		cout << getName() << " is walking on land...." << endl;
	}
};

class Dog : public LandAnimal {
public:
	Dog() {
		// C++ จะเรียก constructor ของ LandAnimal โดยอัตโนมัติ 
		// ถ้าเราไม่ได้เขียนโค้ดเรียกเอง
		cout << "Dog constructor" << endl;
	}
	~Dog() {
		cout << "Dog DESTRUCTOR" << endl;	
	}

	void makeNoise() {
		cout << getName() << " is woofing" << endl;
	}
};

class Cat : public LandAnimal {
public:
	Cat() {
		// C++ จะเรียก constructor ของ LandAnimal โดยอัตโนมัติ 
		// ถ้าเราไม่ได้เขียนโค้ดเรียกเอง
		cout << "Cat constructor" << endl;
	}
	~Cat() {
		cout << "Cat DESTRUCTOR" << endl;	
	}

	void makeNoise() {
		cout << getName() << " is meowing" << endl;
	}
};


int main() {

	cout << "----- instantiate Dog -------" << endl;	
	Dog toob;

	cout << "----- instantiate Cat -------" << endl;	
	Cat jee;

	cout << "------------" << endl;

}


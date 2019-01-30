#include <iostream>
using namespace std;

//----------------------------------------
//    Dynamic Binding (Late Binding)
//----------------------------------------
//  การ override method คือ derived class
//  มีโค้ดของเมธอดชื่อเดียวกับ base class 
//  โดยเมธอดใน base class ประกาศเป็น
//  virual
//
//  เช้น makeNoise ในไฟล์นี้ ถูกปรับแก้แล้วให้เป็น
//  virtual
//
//  เมื่อเมธอดเป็น virtual และ derived class
//  "override" เมธอดนี้ จะทำให้เกิด polymorphism ได้
//
//  โดย polymorphism เกิดเมื่อให้ pointer ของ base class 
//  ชี้ไปที่ออปเจ็คของ derived class แล้ว
//  C++ จะเรียกเมธอดตาม type ของออปเจ็คจริง  
//  (ไม่เรียกตามชนิดของ pointer)  
//
//  เรียกว่าเป็น dynamic binding เนื่องจาก C++
//  ไม่สามารถระบุเมธอดไดใน่ช่วง compile
//  จาก type ของ pointer 
//
//  จะต้องรอจน runtime เพื่อดูว่าออปเจ็คจริง 
//  มาจากคลาสใด แล้วจึงเลือกเมธอดตอนนั้น เช่น
//  
//  Animal *animalPtr = &dogObj;
//  animalPtr->makeNoise();
//  
//  C++ จะเรียก makeNoise ของ dogObj
//
//----------------------------------------

class Animal {
public:
	Animal(string n, int a)
		: name(n), age(a) {
	}

	string getName() { return name; }
	int getAge() { return age; }

	void eat(string food) { 
		cout << name << " is eating " << food << endl;
	}
	void sleep() { 
		cout << name << " is sleeping..." << endl;
	}
	// ----------------------------------------
	//  ประกาศให้ makeNoise เป็น virtual เพื่อให้
	//  โปรแกรมเป็น polymorphism ได้
	//    - เมื่อ base class ประกาศ เมธอดนี้ใน
	//      derived class ทุกระดับชั้น จะเป็น
	//      virtual ด้วย 
	//      (ถึงแม้ว่า derived class จะไม่ได้ประกาศ
	//       virtual แต่ส่วนใหญ่เราประกาศ เพื้อเตือน
	//       ความจำ)
	// ----------------------------------------
	virtual void makeNoise() {
		cout << name << " is making noise" << endl;
	}

private:
	string name;
	int age;
};

class Dog : public Animal {
public:
	Dog(string n, int a)
		: Animal(n, a) {
	}

	// override method makeNoise
	virtual void makeNoise() {
		cout << getName()  << " is woofing" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string n, int a)
		: Animal(n, a) {
	}

	// override method makeNoise
	virtual void makeNoise() {
		cout << getName() << " is meowing" << endl;
	}

};

void helpMakeNoise(Animal *aniPtr) {
	aniPtr->makeNoise();
}

int main() {
	Dog toob("Toob", 4);
	Cat jee("Jee", 2);
	Animal ani("Ani", 5);

	Dog *dogPtr = &toob;
	Cat *catPtr = &jee;
	Animal *animalPtr = &ani;

	cout << "---- เมธอดถูกเรียกตามชนิดของมัน ----" << endl;
	dogPtr->makeNoise();
	catPtr->makeNoise();
	animalPtr->makeNoise();

	cout << "---------------- Polymorphism ----------------" << endl;
	cout << "---- โค้ดเดียวกัน animalPtr->makeNoise();   ----" << endl;
	cout << "---- ทำงานต่างกัน ตามชนิดของออปเจ็คจริง      ----" << endl;
	cout << "---- (ไม่ใช่การทำงานตามชนิดของ pointer)    ----" << endl;
	cout << "---------------------------------------------" << endl;
	animalPtr = &toob;
	animalPtr->makeNoise();
	animalPtr = &jee;
	animalPtr->makeNoise();

	cout << "----------------- Polymorphism -----------------" << endl;
	cout << "---- นอกจากนั้น Polymorphism เห็นได้จากการเรียก  ----" << endl;
	cout << "---- ฟังก์ชัน/เมธอดที่รับ pointer ของ base class ----" << endl;
	cout << "---- เป็น parameter ซึ่งในมุมมองของฟังก์ชัน/เมธอด ----" << endl;
	cout << "---- มันจะไม่รู้เลยว่าเป็นออปเจ็คของ base class   ----" << endl;
	cout << "---- หรือ derived class ใด ถูกส่งเข้ามา        ----" << endl;
  	cout << "-----------------------------------------------" << endl;
	helpMakeNoise(&toob);
	helpMakeNoise(&jee);
}



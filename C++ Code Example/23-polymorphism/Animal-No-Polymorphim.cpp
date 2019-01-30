#include <iostream>
using namespace std;

//----------------------------------------
//         Static Binding
//----------------------------------------
//  การ redefine method คือ derived class
//  มีโค้ดของเมธอดชื่อเดียวกับ base class 
//  เช้น makeNoise ในไฟล์นี้ 
//
//  เราสามารถใช้ pointer ของ base class ชี้ไปที่
//  ออปเจ็คของ derived class ได้ เพราะ
//     "derived class" is a "base class"
//  เช่น Dog is an Animal
//  (แต่ทำกลับกันไม่ได้ เพราะ Animal is not a Dog)
//
//  หลังให้ pointer ของ base class ชี้ไปที่ 
//  ออปเจ็คของ derived class แล้ว
//  หากเป็น static binding จะเรียกเมธอดตาม 
//  type ของ pointer 
//  
//  Animal *animalPtr = &dogObj;
//  animalPtr->makeNoise();
//  
//  โดย C++ จะเรียก makeNoise ของ Animal
// 
//  เป็น static binding เนื่องจาก C++
//  สามารถระบุเมธอดได้ตั้งแต่ช่วง compile
//  โดยเลือกจาก type ของ pointer 
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
	void makeNoise() {
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

	// redefine method makeNoise
	void makeNoise() {
		cout << getName()  << " is woofing" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string n, int a)
		: Animal(n, a) {
	}

	// redefine method makeNoise
	void makeNoise() {
		cout << getName() << " is meowing" << endl;
	}

};

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

	// เราเขียนโด้ด โดยใช้ pointer ของ base class ชี้ไปที่
	// ออปเจ็คของ derived class ได้ เพราะ
	//   "derived class" is a "base class"
	// เช่น Dog is an Animal
	cout << "---- หลังให้ animalPtr ชี้ไปที่ toob ----" << endl;
	cout << "---- C++ ใช้ static binding โดย ----" << endl;
	cout << "---- เรียกเมธอดตาม type ของ pointer ----" << endl;
	animalPtr = &toob;
	animalPtr->makeNoise();
	animalPtr = &jee;
	animalPtr->makeNoise();

	// หากเราเขียนโด้ด โดยใช้ pointer ของ derived class ชี้ไปที่
	// ออปเจ็คของ base class จะได้ compile error เพราะ
	//   "base class" is NOT a "derived class"
	// เช่น Animal is not a dog
	//
	// dogPtr = &ani;  // compile error
}


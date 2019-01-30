#include <iostream>
using namespace std;

//----------------------------------------
//         Inheritance (การสืบทอด)
//----------------------------------------
//      เรียกได้ว่า "Is-A" relationship
//         ความสัมพันธ์แบบ "การเป็น"
//
//  - เป็นวิธีหนึ่งที่ช่วยลดความซ้ำซ้อนของโค้ด
//    (ช่วย reuse โค้ด)
//
//  - Base class (supertype, superclass, parent class)
//    เป็นคลาสที่มีความทั่วไป (general)
//
//  - Derived class (subtype, subclass, child class)
//    เป็นคลาสที่เฉพาะเจาะจง (specific/specialized)
//       - ได้รับ attribute และ method จาก
//          base class
//       
//  - DerivedClass "IS A" BaseClass
//    เช่น Dog is an animal
//        Student is a person
//        Violinist is a musician
//        Car is a vehicle
//
//  - การใช้ศัพท์
//      - Dog is a derived class of Animal.
//        (Dog is a subclass of Animal.)
//      - Animal is a base class. 
//        (Animal is superclass.)
//      - Dog inherits from Animal.
//        Dog สืบทอดจาก Animal
//
//  - access specifier / access modifier
//     - protected - ทำให้ derived class สามารถเข้าถึง
//       member ของ base class โดยตรงได้
//       (แต่ไม่ปลอดภัย ควรใช้ private แล้วให้ base class
//        สร้างเมธอด get/set เพื่อกำหนดเงื่อนไขการแก้ไข
//        ตัวแปร เพื่อไม่ให้ตัวแปรถูกแก้ไขแบบผิด ๆ)
//  
//  - derived class สามารถ
//     - เพิ่มตัวแปรได้
//     - เพิ่มเมธอดได้
//     - redefine method ได้ (เมธอดของ base ไม่เป็น virtual)
//			such as function makeNoice are in superclass and in subclass that called redefine method not overload
//     - override method ได้ (เมธอดของ base เป็น virtual)
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
		cout << name << " is ";
	}

private:
	string name;
	int age;
};

//----------------------------------------
// Dog สืบทอดจาก Animal
// - ได้รับ data member และ member function (method) 
//    จาก Animal
// - เข้าถึง data member ของ Animal โดยตรงไม่ได้
//   เพราะประกาศเป็น private
//    - แต่มีอยู่้ใน Dog โดยเข้าถึงผ่านเมธอด 
//      getName(), getAge()
// - เรียกเมธอดของ base class ได้โดยใช้
//   BaseClassName::methodName()
//----------------------------------------
class Dog : public Animal {
public:
	Dog(string n, int a)
		: Animal(n, a) {
	}

	void makeNoise() {
		// เรียกใช้ makenoise ของ base class
		Animal::makeNoise();
		cout << "woofing" << endl;
	}
};

//----------------------------------------
//    Cat สืบทอดจาก Animal
//----------------------------------------
class Cat : public Animal {
public:
	Cat(string n, int a)
		: Animal(n, a) {
	}

	void makeNoise() {
		// เรียกใช้ makenoise ของ base class
		Animal::makeNoise();
		cout << "meowing" << endl;
	}

};

int main() {
	Dog toob("Toob", 4);
	Cat jee("Jee", 2);

	//----------------------------------------
	// Dog, Cat เรียก eat, sleep ได้ถึงแม้ไม่ได้เขียนใน
	// Dog, Cat แต่เพราะ Dog, Cat สืบทอดมาจาก Animal 
	// จึงใช้ eat, sleep ของ Animal ได้
	//----------------------------------------
	toob.makeNoise();
	toob.eat("pork ball");
	toob.sleep();

	cout << "------------" << endl;
	jee.makeNoise();
	jee.eat("platu");
	jee.sleep();

}


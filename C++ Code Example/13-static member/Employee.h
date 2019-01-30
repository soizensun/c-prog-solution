#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {

public:
	Employee(std::string name, int salary);
	~Employee();

	std::string getName() const;
	int getSalary() const;
	std::string toString() const;

	// ---------------------------------------
	// static method / static member function
	//    - เรียกได้โดยไม่ต้องสร้าง object ก่อน
	//    - เรียกจากชื่อคลาส ไม่ใช้ชื่อ object
	//    - ส่วนใหญ่ใช้ประมวลผล static variable
	// ---------------------------------------
	static int getCount();


private:
	// ----------------------------
	// instance variable
	//   - แต่ละ object มีค่าตัวแปรเหล่านี้
	//     ของมันเอง ไม่แชร์กัน
	// ----------------------------
	std::string name;
	int salary;

	// ---------------------------------------
	// static data member
	//   - "class-wide" variable
	//   - all objects of this class
	//     share this variable. 
	//     ทุกออปเจ็คของคลาสนี้แชร์ตัวแปร 
	//     class variable ตัวเดียวกัน
	//   - เรียกว่า class variable
	// ---------------------------------------
	static int count;
};

#endif
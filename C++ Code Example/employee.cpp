#include <iostream>
#include <string>
#define SIZE 4
using namespace std;

class Employee{
protected:
  string name;
  float money;
public:
  Employee(string name)
    : name(name)
    { }
  string getName(){ return name; }
  virtual float getMoney() = 0;
};

class Normal_employeeA : public Employee{
private:
    float salary;
public:
  Normal_employeeA(string name, float salary = 0)
    : Employee(name), salary(salary)
  { }
  virtual float getMoney(){
    return money = salary;
  }
};

class Normal_employeeB : public Employee{
private:
  float salary;
  float can_sell;
public:
  Normal_employeeB(string name, float salary = 0, float can_sell = 0)
    : Employee(name), salary(salary), can_sell(can_sell)
  { }
  virtual float getMoney(){
    money = (salary + ((20.0/100.0) * can_sell));
    return money;
  }
};

class Pasttime_employee : public Employee{
private:
  int hour;
public:
  Pasttime_employee(string name, int hour)
    : Employee(name), hour(hour)
  { }
  virtual float getMoney(){
    money = hour * 50.0;
    return money;
  }
};
int main(){
  Employee **EmPtr = new Employee *[SIZE];
  EmPtr[0] = new Normal_employeeA("Zen", 15000); // การประกาศ object
  EmPtr[1] = new Normal_employeeB("Moss", 10000, 66666);
  EmPtr[2] = new Normal_employeeB("Tee", 3000, 40000);
  EmPtr[3] = new Pasttime_employee("Nice", 5);
  // Normal_employeeA *NAPtr;
  // Normal_employeeB *NBPtr;
  // Pasttime_employee *PPPtr;
  for(int i = 0 ; i < SIZE ; i++){
    cout << "income " << EmPtr[i]->getMoney() << endl;
  }


}

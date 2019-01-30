#include <iostream>
#include <string>
using namespace std;
class Account{
private:
  string nameAccount;
  string numberAccount;
  float money;
public:
  //constructor
  Account(string nameAccount, string numberAccount){
    money = 0;
    this->nameAccount = nameAccount;
    this->numberAccount = numberAccount;
  }
  string getnameAccount(){
    return nameAccount;
  }
  string getnumberAccount(){
    return numberAccount;
  }
  float getMoney(){
    return money;
  }
  float deposit(float money1){
    money += money1;
  }
  float withdraw(float money2){
    if(money >= money2){
      money -= money2;
    }
  }
};
int main() {
  string yname;
  cout << "What is your name : ";
  cin >> yname;
  Account o1(yname, "6010405092"); // build o1 object
  cout << "Your account number are " << o1.getnumberAccount() << endl << endl;
  cout << "--------------------------------------" << endl << endl;
  cout << "If you want to check your balance (Type 'C')" << endl;
  cout << "If you want to deposit (Type 'D')" << endl;
  cout << "If you want to withdraw (Type 'W')" << endl;
  cout << "End (Type 'E')";
  ;
  while (true) {
    cout << endl;
    char check;
    cout << "Type : ";
    cin >> check;
    if(check == 'C'){
      cout << "You have " << o1.getMoney() << " bath.";
    }
    if(check == 'D'){
      float mn_d;
      cout << "How much money do you deposit : ";
      cin >> mn_d;
      o1.deposit(mn_d);
    }
    if(check == 'W'){
      float mn_w;
      cout << "How much money do you withdrew : ";
      cin >> mn_w;
      o1.withdraw(mn_w);
    }
    if(check == 'E'){
      break;
    }
  }
  cout << "--------------------------------------" << endl;
  cout << "Thank you";

}

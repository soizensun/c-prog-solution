#include <iostream>
using namespace std;

class MilkTeaMachine {
public:
    MilkTeaMachine(int num , double m) : cup(num) , price(m) , money(0) {}

    /*MilkTeaMachine(int num,double m) {
        if (m > 0) {
            cup = num ;
            price = m ;
            money = 0 ;
        }
    }*/

    void insertCoin(double m) {
        money += m ;
        cout << "Have coins now: " << money << endl ;
    }

    void dispense() {
        if ((money >= price) && (cup > 0)) {
            cup -= 1 ;
            money = money - price ;
            cout << "Your milk tea is here. Enjoy!" << endl ;
            cout << "Returning coins: " << money << endl ;
            money = 0 ;
        }
        else if ((money < price) && (cup > 0)) {
            cout << "Not enough coin" << endl ;  }
        else if (cup == 0)  {
            cout << "No more milk tea. Sorry!" << endl ;  }
    }
    void add(int n) {
        cup += n ;
        cout << "Adding more milk tea." << endl;
    }

    void returnCoin() {
        cout << "Returning coins: " << money << endl ;
        money = 0 ;
    }

    double getPricegetMoneygetCup() { 
        cout << "price: " << price << " money: " << money 
        << " cup: " << cup << endl ; }



private:
    double price,money ;
    int cup ;

};

int main(){
    MilkTeaMachine machine(2,0) ;
    cout << "-----------------" << endl ;
    machine.insertCoin(20) ;
    cout << "-----------------" << endl ;
    machine.dispense() ;
    cout << "-----------------" << endl ;
    machine.dispense() ;
    cout << "-----------------" << endl ;
    machine.insertCoin(5) ;
    cout << "-----------------" << endl ;
    machine.dispense() ;
    cout << "-----------------" << endl ;
    machine.insertCoin(5) ;
    cout << "-----------------" << endl ;
    machine.dispense() ;
    cout << "-----------------" << endl ;
    machine.insertCoin(8) ;
    cout << "-----------------" << endl ;
    machine.returnCoin();
    cout << "-----------------" << endl ;
    machine.insertCoin(10) ;
    cout << "-----------------" << endl ;
    machine.dispense() ;
    cout << "-----------------" << endl ;
    machine.add(2);
    cout << "-----------------" << endl ;
    machine.dispense() ;        


    /* machine.insertCoin(10) ;
     machine.getPricegetMoneygetCup();
     machine.insertCoin(5) ;
       machine.returnCoin();
       machine.getPricegetMoneygetCup();        */


}
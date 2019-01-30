#include <iostream>
using namespace std;

class MilkTeaMachine{
private:
	int nMilkTea;
	float pricePerG;
	int coin; // the money you have in the machine.
public:
	MilkTeaMachine(int n = 0, float p = 0){
		nMilkTea = n;
		pricePerG = p;
		coin = 0;
	}
	void insertCoin(int c){
		if (c >= 0){
			coin += c;
			cout << "Have coins now: " << coin << endl;
		}

	}
	void dispense(){
		if (nMilkTea > 0){
			if (coin >= pricePerG){
				nMilkTea--;
				coin = coin - pricePerG; 
				cout << "Your milk tea is here. Enjoy!" << endl;
				cout << "Returning coins: " << coin << endl;
				coin = 0;
			}
			else {
				cout << "Not enough coin." << endl;
			}
		}
		else if (nMilkTea <= 0){
			cout << "No more milk tea. Sorry!" << endl;
		}

	}
	void returnCoin(){
		cout << "Returning coins: " << coin << endl;
		coin = 0;
	}
	void add(int n){
		nMilkTea += n;
		cout << "Adding more milk tea." << endl;
	}
};


int main(){
	// int tc;
	// cin >> tc;

	// MilkTeaMachine machine(2, 8);

	// if(tc >= 1){
	// 	cout << "---test case 1: normal case" << endl;
	// 	machine.insertCoin(20);
	// 	machine.dispense();
	// }

	// if(tc >= 2){
	// 	cout << "---test case 2: dispense but no coin" << endl;
	// 	machine.dispense();
	// }

	// if(tc >= 3){
	// 	cout << "--test case 3: dispense but no enough coin" << endl;
	// 	machine.insertCoin(5);
	// 	machine.dispense();
	// }

	// if(tc >= 4){
	// 	cout << "--test case 4: continue insert coins" << endl;
	// 	machine.insertCoin(5);
	// 	machine.dispense();
	// }

	// if(tc >= 5){
	// 	cout << "--test case 5: return coin" << endl;
	// 	machine.insertCoin(8);
	// 	machine.returnCoin();
	// }

	// if(tc >= 6){
	// 	cout << "--test case 6: no more milk tea" << endl;
	// 	machine.insertCoin(10);
	// 	machine.dispense();
	// }

	// if(tc >= 7){
	// 	cout << "---test case 7: adding more tea (coin form test6)" << endl;
	// 	machine.add(1);
	// 	machine.dispense();
	// }
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



}
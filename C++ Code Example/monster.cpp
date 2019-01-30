#include <iostream>
#include <string>
using namespace std;

class Pokemon{
private:
  int level = 0;
  int totalExp = 0;
  int thisExp = 0;
  int nextExp(){
    return (100  + (level+1) * (level+1));
  }
public:
  void fight(int exp){
    totalExp += exp;
    thisExp += exp;
    while (thisExp >= nextExp()) {
      thisExp = thisExp - nextExp();
      level++;
    }
  }
  void printStat(){
    cout << "Pokemon level: " << level
         << " (Total Exp: " << totalExp << ")\n"
         << "This Level Exp: " << thisExp << endl
         << "Next Level Require Exp: " << nextExp() << endl << endl;
  }
};
int main()
{
    Pokemon zMon;
    zMon.printStat();
    int exp;
    while (1) {
        cout << "Earn Exp: ";
        cin >> exp;
        if (exp < 0) break;
        zMon.fight(exp);
        zMon.printStat();
    }
}

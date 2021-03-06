#include <iostream>
using namespace std;

class Animal
{
private:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};


///// animal 02 //////////////////
class Bird : public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

Bird::Bird(int happiness, int energy, int fullness)
  :
  Animal(happiness, energy, fullness) 
  {}

void Bird::fly(int hour){
    if(hour >= 0){
        energy -= (5 * hour); 
        limitStat();
    }
}
void Bird::sing(){ 
    happiness += 5; 
    limitStat();
}

//////////////////////////////////




void Animal::limitStat(){
    if(happiness > MAX_HAPPINESS) happiness = MAX_HAPPINESS;
    if(happiness < 0) happiness = 0;
    if(energy > MAX_ENERGY) energy = MAX_ENERGY;
    if(energy < 0)  energy = 0;
    if(fullness > MAX_FULLNESS) fullness = MAX_FULLNESS;
    if(fullness < 0) fullness = 0;
}

Animal::Animal(int h, int e, int f)
    :
    happiness(h),
    energy(e),
    fullness(f)
{ }

int Animal::getHappiness(){return happiness;} 
int Animal::getEnergy(){return energy;}
int Animal::getFullness(){return fullness;}

void Animal::eat(int food){
    if (food >= 0){
        fullness += food;
        if (fullness > MAX_FULLNESS) happiness -= 10;
        limitStat();
    }
}

void Animal::play(int hour){
    if(energy > 0 && fullness > 0){
        if (hour >= 0){
            happiness += (5*hour);
            energy -= (10*hour);
            fullness -= (20*hour);
            limitStat();
        }
    }   
}

void Animal::sleep(int hour){
    if (hour >= 0){
        energy += (10*hour);
        fullness -= (10*hour);
        limitStat();
    }

}

void print(Animal a){
  cout << "happiness -> " << a.getHappiness() << endl;
  cout << "energy -> " << a.getEnergy() << endl; 
  cout << "fullness -> " << a.getFullness() << endl;
  cout << "==================================" << endl;
}
int main(){
    Animal a(4,3,5);
    print(a);
    a.eat(566);
    print(a);
    a.sleep(4);
    print(a);
    a.play(5);
    print(a);
    a.play(5);
    print(a);
}


#include <iostream>
using namespace std;

class Animal{
protected:
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
class Pet : public Animal{
private:
    string name;
public:
    Pet(string, int, int, int);
    string getName();
    void setName(string);
};

Pet::Pet(string name, int happiness, int energy, int fullness)
  :Animal(happiness, energy, fullness), name(name)
  { }
string Pet::getName(){return name;}
void Pet::setName(string name){
  this->name = name;
}
Animal::Animal(int happiness, int energy, int fullness)
  :happiness(happiness), energy(energy), fullness(fullness)
  { }

int Animal::getHappiness(){return happiness;}
int Animal::getEnergy(){return energy;}
int Animal::getFullness(){return fullness;}
void Animal::limitStat(){
  if(happiness >  MAX_HAPPINESS) happiness = 100;
  if(happiness < 0) happiness = 0;
  if(energy > MAX_ENERGY) energy = 100;
  if(energy < 0) energy = 0;
  if(fullness > MAX_FULLNESS) fullness = 100;
  if(fullness < 0) fullness = 0;
}
void Animal::eat(int food){
  if(food >= 0){
    fullness = food + fullness;
    if(fullness > MAX_FULLNESS) happiness = happiness - 10;
    limitStat();
  }
}
void Animal::play(int hour){
  if(energy > 0 && fullness > 0){
    if(hour >= 0){
      energy = energy - (10 * hour);
      fullness = fullness - (20 * hour);
      happiness = happiness + (5 * hour);
      limitStat();
    }
  }
}
void Animal::sleep(int hour){
  if(hour >= 0){
    energy = energy + (10 * hour);
    fullness = fullness - (10 * hour);
    limitStat();
  }
}
int main(){}

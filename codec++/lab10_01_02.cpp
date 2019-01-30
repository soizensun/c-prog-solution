#include <iostream>
#include <string>
using namespace std;

class Hero{
private:
    string name;
    int level;
public:
    Hero(string n, int l){
    	name = n;
    	level = l;
    }

    string getName() const{
    	return name;
    }
    int getLevel() const{
    	return level;
    }
};

int main(){	
	int level, level1;
	string name, name1;
	cin >> name;
	cin >> level;
	Hero a(name, level);

	name1 = a.getName();
	level1 = a.getLevel();

	cout << name1 << " " << level1;

}
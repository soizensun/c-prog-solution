#include <iostream>
using namespace std;

class Student {
private:
	float score;
public:
	Student(float score = 0){
		this->score = score;
	}
	float getScore(){
		return score;
	}
	Student operator+(Student s){
		return score + s.score;
	}
	void operator+=(Student s){
		score += s.score;
	}
};


int main(){
	Student a(23);
	Student b(10);
	cout << a.getScore() << endl;
	Student c = a + b;
	cout << c.getScore() << endl;
	c += a;
	cout << c.getScore() << endl;
}
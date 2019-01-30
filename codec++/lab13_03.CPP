#include <iostream>
using namespace std;

class MusicPlaylist{
private:
	string list[20];
	int index;
	int pin;

public:
	MusicPlaylist(){
		index = 0;
		pin = 0;
	}

	void add(string s){
		list[index] = s;
		index += 1;
	}

	void setCurrentTrack(int n){ pin = n; }

	string play(){ return list[pin - 1]; }

};
int main(){
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}

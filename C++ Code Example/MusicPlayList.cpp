#include <iostream>
#include <string>
using namespace std;
class MusicPlaylist{
private:
  string list[20];
  int setCurrentTrack;
  int index;
public:
  MusicPlaylist(){
    setCurrentTrack = 1;
    index = 0;
  }
  void add(string l){
    list[index] = l;
    index++;
  }
  int setCurrentTrack(int s){
    return s;
  }
  string play(){
    return list[setCurrentTrack - 1];
  }
};




int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}

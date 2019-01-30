#include <iostream>
using namespace std;

class MusicPlayList {
private:
  string list[20];
  int index, strack;
public:
  MusicPlayList(){
    index = 0; strack = 1;
  }
  void add(string a){
    list[index] = a;
    index++;
  }
  int setCurrentTrack(int a){
    strack = a;
  }
  string play(){
    return list[strack - 1];
  }
};

int main()
{
    MusicPlayList mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(3);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}

#include <iostream>
#include <string>
using namespace std;
int main(){
  char w[20];
  cin.getline(w, 20);
  // cout << w;
  int c = 0;
  while (w[c] != '\0') {
    if(w[c] == 'w' || w[c] == 'o'){
      if (w[c] == 'w'){
        cout << 'o';
      }
      else if (w[c] == 'o'){
        cout << 'w';
      }
    }
    else if(w[c] == 'a' || w[c] == 't'){
      if (w[c] == 'a'){
        cout << 't';
      }
      else if (w[c] == 't'){
        cout << 'a';
      }
    }
    else if(w[c] == 'l' || w[c] == 'd'){
      if (w[c] == 'l'){
        cout << 'd';
      }
      else if (w[c] == 'd'){
        cout << 'l';
      }
    }
    else {
      cout << w[c];
    }
    c++;
  }
}

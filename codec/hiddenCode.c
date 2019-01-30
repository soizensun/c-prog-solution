#include <stdio.h>
int main(){
  char w[20];
  gets(w);
  // cout << w;
  int c = 0;
  while (w[c] != '\0') {
    if(w[c] == 'w' || w[c] == 'o'){
      if (w[c] == 'w'){
        printf("o");
      }
      else if (w[c] == 'o'){
        printf("w");
      }
    }
    else if(w[c] == 'a' || w[c] == 't'){
      if (w[c] == 'a'){
        printf("t");
      }
      else if (w[c] == 't'){
        printf("a");
      }
    }
    else if(w[c] == 'l' || w[c] == 'd'){
      if (w[c] == 'l'){
        printf("d");
      }
      else if (w[c] == 'd'){
        printf("l");
      }
    }
    else {
      printf("%c", w[c]);
    }
    c++;
  }
}

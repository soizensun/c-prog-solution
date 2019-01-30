#include <iostream>
using namespace std;
int main(){
  int i, j;
  int x = 3;
  int y = 3;
  int a[x][y] = {{1, 2, 3},{2, 3, 4},{5, 5, 7}}
  for (i = 0, i < x, i++) {
    for (j = 0, j < y, j++) {
      cout << a[i][j];
    }
 }
}

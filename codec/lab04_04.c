#include <stdio.h>
int main(){
  int i, j;
  int k, l, m, count, a;
  scanf("%d", &i);
  scanf("%d", &j);
  for (k = 0; k < i; k++) {
    printf("*");
  }
  printf("\n");
    for (count = 1; count < j-1 ; count++) {
      for (m = 0; m < count ; m++) {
        printf(" ");
      }
      printf("*");
      for (l = 0; l < i - 2; l++) {
        printf(" ");
      }
      printf("*");
      printf("\n");
    }
    for (a = 0; a < j-1; a++) {
      printf(" ");
    }
    for (k = 0; k < i; k++) {
      printf("*");
    }
}

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num, n, n1, j;
  scanf("%d", &num);
  if (num == 1){
  printf("a");
  }
  else if (num <= 0 || num > 26){
    printf("-");
  }
  else {
  n = 97 + (num-1);
  n1 = n;
  for (n;n > 96;n--) {
    printf("%c-", n);
  }
  for (j = (n + 2) ; j < n1 ; j++) {
    printf("%c-", j);
  }
  printf("%c\n", n1);
}
  return 0;
}

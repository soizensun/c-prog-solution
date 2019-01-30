#include <stdio.h>
int is_prime(int x){
    if ((x==1 || x%2 == 0 || x%3 == 0|| x%5 == 0|| x%7 == 0) && (x !=2 && x != 3 && x != 5 && x != 7)){
        return 0;
    }
    return 1;
}

int main() {

  int i, n;

  scanf("%d", &n);

  for (i = 1 ; i <= n ; i++) {
    if (is_prime(i))
      printf("%d is a prime number.\n", i);
  }

  return 0;
}

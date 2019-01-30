#include <stdio.h>
#include <math.h>

int main(){
  unsigned long long int ans, n, check=0;
  printf("Input n = ");
  scanf("%llu", &n);
  printf("n^2 = %llu" ,(n*n));
  check = n;
  if (n == 1){
    printf("\nYes. %llu is automorphic number." , n) ;
  }
    
  else {
    for (ans = 1 ; ans <= (n*n) ; ans = ans * 10  ) {
      if ((n*n) % ans == n) {
        check = 5;
        break;
      }
    }
    
    if (check != 5){
      printf("\nNo. %llu is not automorphic number." , n) ;   
    }
    else{
      printf("\nYes. %llu is automorphic number." , n) ;
    }
}

}
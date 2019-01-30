#include <stdio.h>
int main() {
  unsigned long long int a, b, max, min, aa;
  unsigned long long int GCD, LCM;
  scanf("%llu %llu", &a, &b);
  if (a > b) {
    max = a;
    min = b;}
  else {
    max = b;
    min = a;}
  while (aa != 0){
    aa = max % min;
    max = min;
    min = aa;
    // printf("min = %d", min);
    // printf("max = %d\n", max);
  }
  GCD = max;
  LCM = (a*b) / GCD;
  printf("GCD: %llu\n", GCD);
  printf("LCM: %llu\n", LCM);
  return 0;
}

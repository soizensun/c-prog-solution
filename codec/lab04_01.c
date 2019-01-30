#include <stdio.h>
int main(){
  int i;
    int num, ans = 0, value = 1, a;
    scanf("%d", &num);
    for(i = num ; i > 0;){
        a = i % 2;
        // printf("%d\n",a * value );
        ans = ans + (a * value);
        value = value * 10;
        i = i / 2;
    }
    printf("Binary number of %d is %0.4d.", num, ans);
}

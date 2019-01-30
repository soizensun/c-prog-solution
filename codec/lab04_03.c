#include <stdio.h>
int main(){
    int num1, tar, num, add = 10, x;
    int i, count = 0;
    scanf("%d", &num1);
    scanf("%d", &tar);
    num = num1;
    for (i=0 ; num != 0 ; num /= 10){
        x = num % 10;
        if (tar == x) count = count + 1;
        else count = count;
    }
    if (count == 0) printf("There is no \"%d\" in %d.", tar, num1);
    else if (count == 1) printf("There is only 1 \"%d\" in %d.", tar, num1);
    else if (count > 1) printf("There are %d \"%d\"(s) in %d.", count, tar, num1);
}

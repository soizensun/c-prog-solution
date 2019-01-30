#include <stdio.h>
int main(){
    int n;
    float mon, to;
    int d, left;
    scanf("%d",&n);
    scanf("%f",&mon);
    if (n == 1){
        d = 10; left = 0;
    }
    else if (n == 2){
        d = 15; left = 0;
    }
    else if (n >= 3 && n < 6){
        d = 20; left = n - 3;
    }
    else if (n >= 6 && n < 9){
        d = 30; left = n - 6;
    }
    else if (n >= 9){
        d = 40; left = n - 9;
    }
    else{
        d = 0; left = 0;
    }
    to =  mon - ((d/100.00) * mon);
    printf("You get %d percents discount.\n", d);
    printf("Total amount due is %.2f Baht.\n", to);
    printf("And you have %d stickers left.\n",left);
}
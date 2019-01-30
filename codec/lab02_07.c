#include <stdio.h>
#include <math.h>
int main(){
    float area, price, extracost = 0.0, d;
    int size, pep, ch, mu, basecost = 2, fixedcost = 5;
    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");scanf("%d", &size);
    printf("Extra pepperoni? (1=yes, 0=no): "); scanf("%d", &pep);
    printf("Extra cheese? (1=yes, 0=no): " ); scanf("%d", &ch);
    printf("Extra mushroom? (1=yes, 0=no): " ); scanf("%d", &mu);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    if (size == 1) d = 10;
    if (size == 2) d = 16;
    if (size == 3) d = 20;
    if (pep == 1) extracost = extracost + 0.5;
    if (ch == 1) extracost = extracost + 0.25;
    if (mu == 1) extracost = extracost + 0.30;
    area = M_PI * ((d * d)/4);
    price = 1.5 * (fixedcost + (basecost * area) + (extracost * area));
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.\n");
}

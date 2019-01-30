#include <stdio.h>
int main()
{
    float st_g ,re_g ,g ,g1;
    int c1 ,c ,x;
    printf("Input the previous semester GPA: "); scanf("%f", &st_g);
    printf("Input the previous credits: "); scanf("%d", &c1);
    printf("Input the credits this semester: "); scanf("%d", &c);
    printf("Input the required GPA: "); scanf("%f", &re_g);
    x = (c1 + c);
    g = (x * re_g) - (st_g * c1);
    g1 = (g / c);
    printf("The GPA this semester should be %.2f" ,g1);
}

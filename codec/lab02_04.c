#include <stdio.h>
int main()
{
    int a ,b ,c;
    printf("Enter length of side A: "); scanf("%d" ,&a);
    printf("Enter length of side B: "); scanf("%d" ,&b);
    printf("Enter length of side C: "); scanf("%d" ,&c);
    if (a == b && b == c && c == a)
        printf("Triangle type is equilateral.");
    else if (a <= 0 || b <= 0 || c <= 0)
        printf("Triangle type is invalid.");
    else if (a+b<=c || c+a<=b || b+c<=a)
        printf("Triangle type is invalid.");
    else if (a == b || b == c || c == a)
        printf("Triangle type is isosceles.");
    else if (a != b && b != c && c != a)
        printf("Triangle type is scalene.");
}

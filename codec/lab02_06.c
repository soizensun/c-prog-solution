#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    printf("Enter the y coordinate: ");
    scanf("%d", &y);
    if (x == 0 && y == 0)
        printf("Center");
    else if (x < 0 && y == 0)
        printf("West");
    else if (x > 0 && y == 0)
        printf("East");
    else if (x == 0 && y > 0)
        printf("North");
    else if (x == 0 && y < 0)
        printf("South");
    else if (x < 0 && y < 0)
        printf("South-west");
    else if (x < 0 && y > 0)
        printf("North-west");
    else if (x > 0 && y < 0)
        printf("South-east");
    else if (x > 0 && y > 0)
        printf("North-east");
    return 0;
}

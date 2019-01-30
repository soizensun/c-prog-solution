#include <stdio.h>
void main()
{
    int hour, min;
    printf("Enter hour: ");
    scanf("%d", &hour);
    printf("Enter minute: ");
    scanf("%d", &min);
    printf("Time is %02d:%02d", hour, min);
}

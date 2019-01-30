#include <stdio.h>
int main()
{
    int hour, min;
    char pp, mm;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c%c", &hour, &min, &pp, &mm);
    if (pp == 'P' || pp == 'p'){
        if (hour < 12)
            hour = hour + 12;
        else if (hour == 12)
            hour = hour;
    }
    else if (pp == 'A' || pp == 'a'){
        if (hour == 12)
            hour = 0;
        else hour = hour;
    }
    printf("Equivalent 24-hour time: %02d:%02d", hour, min);
    return 0;
}

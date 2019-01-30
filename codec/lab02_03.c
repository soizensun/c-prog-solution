#include <stdio.h>
int main()
{
    float mon ,s1 ,s2;
    scanf("%f" ,&mon);
    if (mon < 0){
        printf("Error: Salary must be greater or equal to 0");
    }
    else if (mon <= 300000.00){
        mon = mon*0.05;
        printf("%.2f" ,mon);
    }
    else if (mon > 300000.00){
        s1 = mon - 300000.00;
        s1 = s1*0.1;
        s2 = 300000.00*0.05;
        mon = s1 + s2;
        printf("%.2f" ,mon);
    }
}

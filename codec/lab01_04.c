#include <stdio.h>
// #include <math.h>
// #define PI 22/7

int main(){
  float r;
  printf("Please enter radius: ");
  scanf("%f", &r);
  float rr = ((4.0/3.0) * (22.0/7.0) * (r * r * r));
  printf("The volume of this sphere is %.2f",rr);
}



#include <stdio.h>

int main(){
    float radius;
    printf("Please enter radius: ");
    scanf("%f", &radius);
    float volume =  ((4.0/3.0) * (22.0/7.0)  * (radius * radius * radius));
    printf("The volume of this shpere is %.2f", volume);
}
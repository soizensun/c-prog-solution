#include <stdio.h>
int main(int argc, char const *argv[]) {
  int total;
  printf("Enter computer working time: ");
  scanf("%d", &total);
  int day = total/1440;
  int d = total - (day * 1440);
  int hour = d/60;
  int mins = d - (hour * 60);
  printf("It is %d days %d hours and %d minutes.", day, hour, mins);
  return 0;
}

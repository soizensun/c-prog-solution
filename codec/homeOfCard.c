#include <stdio.h>

int main(void) {
  char input1[4], input2[4], input3[4];
  scanf("%s", input1);
  scanf("%s", input2);
  scanf("%s", input3);

  char max1 = input1[0], max2 = input2[0], max3 = input3[0];
  for (int i = 1; i < 3; i++) {
    if (input1[i] > max1) {
      max1 = input1[i];
    }
    if (input2[i] > max2) {
      max2 = input2[i];
    }
    if (input3[i] > max3) {
      max3 = input3[i];
    }
  }

  if (max1 > max2 && max1 > max3) {
    printf("1");
  } else if (max2 > max1 && max2 > max3) {
    printf("2");
  } else if (max3 > max1 && max3 > max2) {
    printf("3");
  } else if (max1 > max2 && max1 == max3) {
    printf("1 3");
  } else if (max1 > max3 && max1 == max2) {
    printf("1 2");
  } else if (max2 > max1 && max2 == max3) {
    printf("2 3");
  } else if (max1 == max2 && max2 == max3) {
    printf("1 2 3");
  }

  return 0;
}
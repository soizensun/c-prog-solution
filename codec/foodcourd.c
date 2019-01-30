#include <stdio.h>
int main(void) {
  int all;
  scanf("%d", &all);
  for (int y = 0; y < all; y++) {
    int store, quest;
    scanf("%d %d", &store, &quest);
    int price[store];
    int money[quest];

    for (int z = 0; z < store; z++) {
      scanf(" %d", &price[z]);
    }

    for (int x = 0; x < quest; x++) {
      scanf("%d", &money[x]);
    }

    for (int i = 0; i < quest; i++) {
      int canBuy = 0;
      for (int i2 = 0; i2 < store; i2++) {
        if (money[i] >= price[i2]) {
          canBuy++;
        }
      }
      printf("%d %d\n", canBuy, store - canBuy);
    }
  }
  return 0;
}

#include <stdio.h>
int main() {
    int H, num, o = 0, step = 2;
    int i;
    printf("Input number of stairs: "); scanf("%d", &H);
    for(;;) {
        printf("---- round %d ----\n", ++o);
        for (i = H; i > 0; i--) {
            if (i == step) printf("|-O-|\n");
            else if (i == step - 1) printf("|-^-|\n");
            else printf("|---|\n");
        }
        printf("Input step command: "); scanf("%d", &num);
        if (!num) break;
        step += num;
        if (step > H) step = H;
        else if (step < 2) step = 2;
    }
}
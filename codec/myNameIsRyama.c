#include <stdio.h>
int main()
{
    char p;
    int o;
    scanf("%c %d", &p, &o);
    if (p == 'l' || p == 'r'){
        if (o >= 1 && o <= 9){
            // printf("asdf");
            if (p == 'r'){
                int ii = o;
                for(ii; ii > 0; ii--){
                    int i = ii;
                    for(i; i > 0; i--){
                         printf(" ");
                    }
                    printf("*");
                    printf("\n");
                }
                printf("#");
            }
            else if (p == 'l'){
              int oo = o;
              int c = 1;
              for(c; c < oo + 1; c++){
                int cc = 1;
                for(cc; cc < c; cc++){
                  printf(" ");
                }
                printf("*");
                printf("\n");
              }
              int op = 0;
              for(op; op < o; op++){
                printf(" ");
              }
              printf("#");
            }
        }
    }
    return 0;
}

#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int i = 0 ;i < num; i++){
        int count = 0;
        int q = 1;
        int p = 1;
        int r;
        scanf("%d", &r);
        int sum = 1;        
        while (1){
            int l = q + p;
            sum += l;
            q = p;
            p = l;
            // printf("  %d\n", count);
            // printf(" %d\n", sum);
            count++;
            if(sum > r) break;
        }
        printf("  %d\n", count );
        if ((count) % 3 == 0) printf("Team3\n");
        else if ((count) % 3 == 1) printf("Team2\n");
        else if ((count) % 3 == 2) printf("Team1\n");
        
    }
}

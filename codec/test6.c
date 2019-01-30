#include <stdio.h>
int main(){
    int r = 34;
    int count = 1;
    int q = 1;
    int p = 1;
    while (1){
        int l = q + p;
        // q p l 
        //   q p l
        //     q p l
        q = p;
        p = l;
        printf("%d\n", l);
        count++;
        if(l > r) break;
    }
}
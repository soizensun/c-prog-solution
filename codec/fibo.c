#include <stdio.h>
int main(){
    int num; 
    unsigned long int result;
    scanf("%d", &num);
    if(num >= 0 && num <= 50){
        if(num == 0){
            result = 0;
        }
        if(num == 1){
            result = 1;
        }
        else {
            int one = 0;
            int two = 1;
            for(int i = 1; i < num; i++){
                // printf("%d", i);
                result = one + two;
                one = two;
                two = result;
            }
        }
        printf("%lu", result);
    }


}

// 0 1 1 2 3 5 8 13 21 34 55
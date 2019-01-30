#include <stdio.h>
#include <string.h>

int main(){
    char a[10000];
    scanf("%s", a);

    int min = strlen(a);
    char minchar;
    for(int i = 0; a[i] != '\0'; i++){
        // printf("%c", a[i]);
        int count = 0;
        for(int j = 0; a[j] != '\0'; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if(min > count){
            min = count;
            minchar = a[i];
        }
    }
    printf("%c", minchar);
}
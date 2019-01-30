#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

typedef struct{
    int id;
    char time[10];
    char type_of_shirt[20];
    int amount;
    float price;
}Info;

void demo_read(){
    FILE *f = fopen("stock-log-20170401.txt", "r");
    char str[100];
    Info rec;
    char *token;
    char *delim = ",";
    while (fgets(str, sizeof(str), f) != NULL){
        // printf("str = %s", str);
        token = strtok(str, delim);    
        int col = 0;
        while (token != NULL){
            switch(col){
                case 0:
                    rec.id = atoi(token);
                    break;
                case 1:
                    strcpy(rec.time, token);
                    break;
                case 2:
                    strcpy(rec.type_of_shirt, token);
                    break;
                case 3:
                    rec.amount = atoi(token);
                    break;
                case 4:
                    rec.price = atof(token);
                    break;
            }
            col++;
            token = strtok(NULL, delim);
        }
        printf("id = %d, time = %s\n", rec.id, rec.time);




    }
    fclose(f);
}

int main(){
    demo_read();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
char * stoupper(const char *str) {
    static char new_str[100];
    for (int i = 0; str[i]; i++)
        new_str[i] = toupper(str[i]);
    return new_str;
}
 
int main() {
    char s[100];
    char* result;
 
    scanf("%s",s);
    result = stoupper(s);
 
    if (result == s)
        printf("ERROR.\n");
 
    printf("%s\n",result);
}
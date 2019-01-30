#include <stdio.h>
#include <string.h>
 
void main() {
    int len, n;
    scanf("%d %d", &len, &n);
    char ss[len + 1];
    char str[len + 1];
    scanf("%s", ss);
 
    for (size_t i = 0; i < n; i++) {
        scanf("%s", str);
        for (size_t i = 0, attmp = 0; str[i]; i++) {
            if (str[i] != ss[i]) attmp++;
            if (attmp == 3) {
                printf("%s", ss);
                return 0;
            }
        }
        strcpy(ss, str);
    }
    printf("%s", str);

}
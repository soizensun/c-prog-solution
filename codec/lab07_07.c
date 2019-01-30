#include <stdio.h>
 
void roman2arabic(char input[], char output[]) {
    for (; *input; input++, output++) {
        if (*input == 'I') {
 
            if (input[1] == 'I') {
                if (input[2] == 'I')
                    *output = '3', input += 2;
                else
                    *output = '2', input++;
            } else if (input[1] == 'V')
                *output = '4', input++;
            else if (input[1] == 'X')
                *output = '9', input++;
            else
                *output = '1';
 
        } else if (*input == 'V') {
 
            if (input[1] == 'I') {
                if (input[2] == 'I') {
                    if (input[3] == 'I')
                        *output = '8', input += 3;
                    else
                        *output = '7', input += 2;
                } else
                    *output = '6', input++;
            } else
                *output = '5';
 
        } else *output = *input;
    }
    *output = '\0';
}
 
int main() {
    char input[80], output[80];
 
    printf(" Input: ");
    fgets(input, 80, stdin);
 
    roman2arabic(input, output);
    printf("Output: %s\n", output);
 
    return 0;
}
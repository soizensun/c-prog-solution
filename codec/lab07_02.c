#include <stdio.h>
#include <stdlib.h>

int remove_vowel(char *str){
	
    char vv[] = {'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; *(str + i); i++) {
        for (int j = 0; j < 10; j++) {
            if ((j < 5 && *(str + i) == vv[j]) || (j >= 5 && *(str + i) == vv[j-5] + 32)) {
                for (j = i; str[j]; j++)
                    str[j] = str[j+1];
                str[j-1] = '\0';
                i = i - 1;
                break;
            }
        }
    }


}

int main(){
	char str[80];

  	printf(" Input: ");
 	gets(str);

  	remove_vowel(str);
  	printf("Output: %s\n",str);

  	return 0;
}
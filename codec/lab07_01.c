#include <stdio.h>

int main() {
  char str[40];
  int  i=0, count;

  char c;

  printf("String <without a space>: ");
  scanf("%s",str);

  count = 0;
  for(; str[i] != '\0'; i++ ){
  	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
  	   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
  		count += 1; printf("%c ",str[i] );
  	} 		
  }



  printf("\nThis string contains %d vowel%s.\n",count,count>1?"s":"");
  return 0;
}
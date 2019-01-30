#include <stdio.h>

void stringcat(char scr[], char dest[]){
	for (;*dest != '\0'; dest++){
		*dest = *dest;
	}
	for (;*scr != '\0'; scr++, dest++){
		*dest = *scr;
	}
		*dest = '\0';
	
}


int main(){
  char in1[100],in2[100];

  printf("Input 1: ");
  gets(in1);  /* read a line of characters from the input to "in1" variable */
  printf("Input 2: ");
  gets(in2);  /* read another line of characters from the input to "in2" variable */
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}



// void concat(char *str1, char *str2, char *str3){ 	
// 	for (; *str1 != '\0'; str1++, str3++) 		
// 		*str3 = *str1; 	
// 	for (; *str2 != '\0'; str2++, str3++ ) 		
// 		*str3 = *str2; 	*str3 = '\0'; 	 
// }  

// void append(char *str1, char *str2){ 	
// 	for (; *str1 != '\0'; str1++) 		
// 		*str1 = *str1; 	
// 	for (; *str2 != '\0'; str1++, str2++) 		
// 		*str1 = *str2; 	*str1 = '\0'; 		 
// }
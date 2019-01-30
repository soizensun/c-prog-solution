#include <stdio.h>
#include <string.h>

int main ()
{
  char str[50] ; char * pch; char * preNum[20]; char preOpa[20];
  int i = 0 ; int j = 0 ; int s = 0 ;

  gets(str);        // input math solution
  
  // oparator in array (preOpa)
  for (int k = 0 ; str[k] != '\0' ; k++) {
    if ((str[k] == '+') || (str[k] == '-')) {
      preOpa[j] = str[k];
      //printf("%c" , preOpa[j]);
      j++ ;
    }
  }

  // Split space + input num in array (preNum)
  pch = strtok(str," +-");
  while (pch != NULL)
  {
    preNum[i++] = pch;
    pch = strtok(NULL, " +-");
  }
  printf("%s", preNum[0]);
  int c1 = 1, c2 = 0;
  for (int i = 0; i < strlen(preOpa) * 2; i++) {
    if (i % 2 == 0) {
      printf(" %s", preNum[c1]);
      c1++;
    } else {
      printf(" %c" , preOpa[c2]);
      c2++;
    }
  }

  return 0;
}
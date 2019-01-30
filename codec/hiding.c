#include <stdio.h>
#include <string.h>
int main(){
  // char prototype[40];
  // char strr[40];
  // gets(prototype);
  // gets(strr);
  // int count = 0;
  // for (int i = 0; strr[i] != '\0'; i++){
  //   for (int j = 0; prototype[j] != '\0'; j++){
  //     if (strr[i] == prototype[j]){
  //       strcpy(prototype, strstr(prototype, "" + strr[i]));
  //       count++;
  //     }
      
  //   }
  // }
  // printf("count = %d", count);


  // // strcpy(prototype, strstr(prototype, "eee"));
  // // puts(prototype);


  char string1[41], string2[41];
  gets(string1);
  gets(string2);

  int lastIndex = 0, yes = 0; 
  for (int j = 0; j < strlen(string2); j++) {
    for (int i = 0; i < strlen(string1); i++) {
      if (string2[j] == string1[i] && i >= lastIndex) {
        yes++;
        lastIndex = i;
        break;
      }
    }
  }

  if (yes == strlen(string2)) {
    printf("True");
  } else {
    printf("False");
  }
  return 0;


}
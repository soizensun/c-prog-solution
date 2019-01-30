#include <stdio.h>

int main(void) {
  int n,count=0;
  char ball[50], last;
  scanf("%d ", &n);
  gets(ball);
  int i;
  for(i=0;ball[i]!='\0';i++){
    if(ball[i] == ' '){
      continue;
    }
    int j;
    for(j=i+1;ball[j]!= '\0';j++){
      if(ball[i] == ball[j]){
        ball[j] = ' ';
        count += 1;
        if(last != ball[i]){
          last = ball[i];
          count += 1;
        }
      }
    }
  }
  if(count == 0){
    printf("NO\n");
  }else{
    printf("%d\n", count);
    if(count>n/2){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
}

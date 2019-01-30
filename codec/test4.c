#include <stdio.h>
#include <conio.h>

typedef struct{
  char sub_name[50];
  float mid_s;
  float fin_s;
} Subject;

typedef struct{
  int year;
  char name[50];
  Subject *sub;
} Student;

void creat_struct(){
}

int main(){
  Student stu1;

  int count = 0;
  while (1){
    int year;
    printf("\nYear (1 - 4 years) 0 to exit: "); scanf("%d", &year); getchar();
    if (year == 0) break;
    else {
      count++;
      if (year == 1){
        char name[50]; printf("name: "); gets(name); // get name 
        int num_sub; printf("How many subject do you study: "); scanf("%d", &num_sub); getchar();// num of subject
        char sub[num_sub][50]; // declare array of name_subject
        float mid_ss[num_sub]; float fin_ss[num_sub]; // declare array of fin score and mid score
        for(int i = 0; i < num_sub; i++){ // loop for assign each name_subject, mid_s, fin_s
          printf("subject %d: ", i+1); gets(sub[i]);
          printf("mid score: "); scanf("%f", &mid_ss[i]);
          printf("fin score: "); scanf("%f", &fin_ss[i]); getchar();
        }
      }
      else if (year == 2){
        char name[50]; printf("name: "); gets(name); // get name 
        int num_sub; printf("How many subject do you study: "); scanf("%d", &num_sub); getchar();// num of subject
        char sub[num_sub][50]; // declare array of name_subject
        float mid_ss[num_sub]; float fin_ss[num_sub]; // declare array of fin score and mid score
        for(int i = 0; i < num_sub; i++){ // loop for assign each name_subject, mid_s, fin_s
          printf("subject %d: ", i+1); gets(sub[i]);
          printf("mid score: "); scanf("%f", &mid_ss[i]);
          printf("fin score: "); scanf("%f", &fin_ss[i]); getchar();
        }
      }
      else if (year == 3){
        char name[50]; printf("name: "); gets(name); // get name 
        int num_sub; printf("How many subject do you study: "); scanf("%d", &num_sub); getchar();// num of subject
        char sub[num_sub][50]; // declare array of name_subject
        float mid_ss[num_sub]; float fin_ss[num_sub]; // declare array of fin score and mid score
        for(int i = 0; i < num_sub; i++){ // loop for assign each name_subject, mid_s, fin_s
          printf("subject %d: ", i+1); gets(sub[i]);
          printf("mid score: "); scanf("%f", &mid_ss[i]);
          printf("fin score: "); scanf("%f", &fin_ss[i]); getchar();
        }
      }
      else if (year == 4){
        char name[50]; printf("name: "); gets(name); // get name 
        int num_sub; printf("How many subject do you study: "); scanf("%d", &num_sub); getchar();// num of subject
        char sub[num_sub][50]; // declare array of name_subject
        float mid_ss[num_sub]; float fin_ss[num_sub]; // declare array of fin score and mid score
        for(int i = 0; i < num_sub; i++){ // loop for assign each name_subject, mid_s, fin_s
          printf("subject %d: ", i+1); gets(sub[i]);
          printf("mid score: "); scanf("%f", &mid_ss[i]);
          printf("fin score: "); scanf("%f", &fin_ss[i]); getchar();
        }
      }

      else 
        printf("Please enter correct years.\n"); 
      }
    }
    

  }







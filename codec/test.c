#include <stdio.h>

int main(){
	typedef struct{
		char sub_name[50];
		float mid_s;
		float fin_s;
	} subject;

	typedef struct{
		int year;
		char stu_name[50];
		subject sub;
	}detailOfStu;

	int year;
	printf("Year (1 - 4 years) : "); scanf("%d", &year);
	switch (year){
		case (1) :
			char stu_name[50]; char sub_name[50];
			float mid_s;  float fin_s;
			printf("What is your name: "); gets(stu_name);
			printf("What is your subject: "); gets(sub_name);
			printf("How many final score: "); scanf("%f", &fin_s);
			printf("How many mid score: "); scanf("%f", &mid_s);
			creatStruct(year, stu_name, sub_name, mid_s, fin_s);
			break;
		case (2) :
			char stu_name[50]; char sub_name[50];
			float mid_s;  float fin_s;
			printf("What is your name: "); gets(stu_name);
			printf("What is your subject: "); gets(sub_name);
			printf("How many final score: "); scanf("%f", &fin_s);
			printf("How many mid score: "); scanf("%f", &mid_s);
			creatStruct(year, stu_name, sub_name, mid_s, fin_s);
			break;
		case (3) :
			char stu_name[50]; char sub_name[50];
			float mid_s;  float fin_s;
			printf("What is your name: "); gets(stu_name);
			printf("What is your subject: "); gets(sub_name);
			printf("How many final score: "); scanf("%f", &fin_s);
			printf("How many mid score: "); scanf("%f", &mid_s);
			creatStruct(year, stu_name, sub_name, mid_s, fin_s);
			break;
		case (4) :
			char stu_name[50]; char sub_name[50];
			float mid_s;  float fin_s;
			printf("What is your name: "); gets(stu_name);
			printf("What is your subject: "); gets(sub_name);
			printf("How many final score: "); scanf("%f", &fin_s);
			printf("How many mid score: "); scanf("%f", &mid_s);
			creatStruct(year, stu_name, sub_name, mid_s, fin_s);
			break;
	}


	
	
}

#include <stdio.h>
#define SIZE 5

typedef struct{
	char id[11];
	int mid_s;
	int fin_s;
	char grade;
}Student;

void calculateGrade(Student *stu){
	for(int i = 0; i < SIZE; i++){
		float s = stu[i].mid_s + stu[i].fin_s;
		if (s >= 80) stu[i].grade = 'A';
		else if (s >= 70 && s <= 79) stu[i].grade = 'B';
		else if (s >= 60 && s <= 69) stu[i].grade = 'C';
		else if (s >= 50 && s <= 59) stu[i].grade = 'D';
		else stu[i].grade = 'F';
	}
}

void printGreade(Student *stu, int i){
	printf("Student ID %s receives grade %c.\n", stu[i].id, stu[i].grade);
}

int main(){
	Student stu[SIZE];
	for (int i = 0; i < SIZE; ++i){
		printf("Enter Student ID: "); gets(stu[i].id);
		printf("Enter Student Midterm: "); scanf("%d", &stu[i].mid_s);
		printf("Enter Student Final: "); scanf("%d", &stu[i].fin_s); getchar();
	}
	calculateGrade(stu);
	for(int j = 0; j < SIZE; ++j){
		printGreade(stu, j);
	}
	


	
}
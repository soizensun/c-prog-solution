#include <stdio.h>

double findAverage(char *filename){
	double check, sum = 0, i = 0;
	FILE *fp = fopen(filename, "r");
	while(!feof(fp)){
		if(fscanf(fp,"%lf",&check) == 1){
			sum += check;
			i++;
		}
	}
	
	fclose(fp);
	return sum/i;
}

int main()
{
	// get file anme
    char filename[20];
    double average;
    scanf("%s", filename);

    // sent file name to the function findAverage
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}
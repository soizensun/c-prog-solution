#include <stdio.h>
#include <stdlib.h>

void spilt(double *data, int size, double *p1, int *p1_size, double *p2, int *p2_size, double v){
	*p1_size = 0;
	*p2_size = 0;
	for (size_t i = 0; i < size; i++) {
		if (data[i] <= v){
			p1[*p1_size] = data[i];
			(*p1_size)++;
		}
		else {
			p2[*p2_size] = data[i];
			(*p2_size)++;
		}
	}
}

int main(){
	double data[] = {3, 6, 5, 10, 54, 34, 2, 8};
	int size = 8; double v = 10;
	double* p1 = malloc(sizeof(double) * size);
	if (p1 == NULL) exit(1);
	double* p2 = malloc(sizeof(double) * size);
	if (p2 == NULL) exit(1);
	
	int p1_size = 0;
	int p2_size = 0;
	spilt(data, size, p1, &p1_size, p2, &p2_size, v);
	printf("p1_size = %d\n", p1_size);
	printf("p2_size = %d", p2_size);
	free(p1); free(p2);
}
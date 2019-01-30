// should ask *****

#include <stdio.h>
#include <stdlib.h>

int sort(const void *a, const void *b){
	double v1 = *((double*)a);
	double v2 = *((double*)b);
	if (v1 < v2) return -1;
	if (v1 > v2) return 1;
	return 0;
}

int main(){
	double v[] = {10, 1, 1, 2, 3, 5};
	qsort(v, 6, sizeof(double), sort());
	for (int i = 0; i < 6; ++i){
		printf("v[%d] = %d, ", i, v[i]);
	}
}
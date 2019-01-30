#include <stdio.h>
#include <stdlib.h>

int main(){
	int row = 5;
	int col = 5;
	int a_s[row * col];
	int *a_d = malloc(row * col * sizeof(int));
	int x = 3;
	int y = 2;
	int pos = x + y * col;
	a_s[pos] = 99;
	a_d[pos] = 99;

	for (int i = 0; i < (row * col); ++i){
		printf("%d = %d\n", i, a_s[i]);
	}
	for (int i = 0; i < (row * col); ++i){
		printf("%d = %d\n", i, a_d[i]);
	}

	free(a_d);
}
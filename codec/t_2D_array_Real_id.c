// should ask ********
// run error?

#include <stdio.h>
#include <stdlib.h>

int main(){
	int row = 5;
	int col = 4;
	float a_s[row][col];
	float **a_d = malloc(row * sizeof(float*));
	if (a_d == NULL) exit(1);
	for (int i = 0; i < row; ++i){
		a_d[i] = malloc(col * sizeof(float));
		if (a_d[i] == NULL) exit(1);
	}

	a_d[2][3] = 888;
	a_s[2][3] = 999;

	for (int i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			printf("a_s[%d][%d] = %d\n", i, j, a_s[i][j]);
		}
	}
	printf("--------------------\n");
	for (int i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			printf("a_d[%d][%d] = %d\n", i, j, a_d[i][j]);
		}
	}

	for (int i = 0; i < row; ++i){
		free(a_d[i]);
	}
	free(a_d);	


}
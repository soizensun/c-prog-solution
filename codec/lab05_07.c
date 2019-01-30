#include <stdio.h>

int main() {
 int n, i, j;
 printf("Enter the number of rows or columns: ");
 scanf("%d",&n);
 int a[n][n];

// Assign value to array a

for (i = 0; i < n; i++){
	for (j = 0; j < n; j++){
		// printf("%d%d-%d ",i,j,(i+j+1));
		a[i][j] = (i+j) + 1;
	}
	// printf("\n");
}

 // Print all values in array a
 for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++)
       printf("%2d ", a[i][j]);
    printf("\n");
 }
 return 0;
}
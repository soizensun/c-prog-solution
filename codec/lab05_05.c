#include <stdio.h>
int main(){
	int n;
	int i, j, k, l;
	printf("Enter n: "); scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 0; j < i; j++){
			if (j % 2 == 0) printf("-");
			else printf("x");
		}
		printf("\n");
	}
	for (k = n-1; k >= 1; k--){
		for (l = 1; l <= k; l++){
			// printf("%d\n", l);
			if (l % 2 != 0) printf("-");
			else printf("x");
		}
		printf("\n");	
	}
}
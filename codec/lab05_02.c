#include <stdio.h>
#include <math.h>

int main() {
    int a,b,n, found=0;
    double c;

    scanf("%d", &n);
// **********************************************
    a = 1; c = 1;
	for (; a <= n; a++){
		if (found == 1) break;
		else{
			b = 1;
			for (;;){
				if (a < b){
					c = n - (a + b);
					// printf("a = %d ", a);
					// printf("b = %d ", b);
					// printf("c = %d\n", (int)c);
					// printf("===============\n");
					if (pow(c,2) == (pow(a,2) + pow(b,2))) {
						found = 1; break;
					}
				}
				if (found == 1) break;
				else b += 1;
				if ((a + b) >= n) break;
			}
		}
	}
	a = a-1;
// **********************************************
    if (found) {
        printf("(%d, %d, %d)\n", a,b,(int)c);
    } else {
        printf("No triple found.\n");
    }
}
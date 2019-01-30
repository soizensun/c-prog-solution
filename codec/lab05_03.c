#include <stdio.h>
int main(){
	char oo[] = {'+', '-', '*', '/'};
	char o;
	float n;
	int i;
	printf("Initial Value: "); scanf("%f", &n); getchar();
	while (1){
		float n1;
		printf("\n");
		printf("Operator: "); scanf("%c", &o); getchar();
		if (o == '+' || o == '-' || o == '*' || o == '/'){
			switch (o){
				case ('+'):
					printf("Input Value: "); scanf("%f", &n1); getchar();
					n = n + n1;
					printf("Present Value is %.4f\n", n);
					break;
				case ('-'):
					printf("Input Value: "); scanf("%f", &n1); getchar();
					n = n - n1;
					printf("Present Value is %.4f\n", n);
					break;
				case ('*'):
					printf("Input Value: "); scanf("%f", &n1); getchar();
					n = n * n1;
					printf("Present Value is %.4f\n", n);
					break;
				case ('/'):
					printf("Input Value: "); scanf("%f", &n1); getchar();
					n = n / n1;
					printf("Present Value is %.4f\n", n);
					break;
				default : break;
			}
		}
		else break;

	}
printf("\nFinish Calculation. Final Value is %.4f\n", n);
}
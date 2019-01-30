#include <stdio.h>
int main()
{
	char a = getchar();
	if (a > 65 && a < 90){
		printf("Output: upper case\n");
	}
	else if (a > 97 && a < 122){
		printf("Output: lower case\n");
	}
	else if (a > 47 && a < 57){
		printf("Output: digit\n");
	}
	else{
		printf("Output: others");
	}
}

// I can use memcpy and strcpy.
// What diff between memcpy, strcpy?


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	struct card{
		char name[255];
		int atk;
		int def;    
	};
	struct card c1;
	// initialize struct
	// c1.name = "bug"; X
	char n[] = "Bug";
	// memcpy(c1.name, n, strlen(n) + 1);    or
	strcpy(c1.name, n);
	c1.atk = 10;
	c1.def = 100;

	printf("%s\n", c1.name);
	printf("%d\n", c1.atk);
	printf("%d\n", c1.def);
}


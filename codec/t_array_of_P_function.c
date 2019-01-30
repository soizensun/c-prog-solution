#include <stdio.h>
#include <stdlib.h>

void fun1(int v){
	printf("FUN1 %d\n", v);
}
void fun2(int v){
	printf("FUN2 %d\n", v);
}
void fun3(int v){
	printf("FUN3 %d\n", v);
}


int main(){
	void(* f[3])(int) = {fun1, fun2, fun3};
	int num;

	scanf("%d", &num);
	switch(num){
		case 1:
		case 2:
		case 3:
			(* f[num - 1])(num);
		default:
			printf("sorry");
	}

}

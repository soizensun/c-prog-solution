// I can't run, when I creat two card.
// If I creat 1 card it can run.
// why?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//global strust
struct card{
	char *name;
	char atk;
	char def;
};
struct card creat_card(const char*, int, int);
void free_card(struct card);
void print(struct card);

int main(){
	struct card c1 = creat_card("bug", 100, 10);
	// struct card c2 = creat_card("kitpavin", 100, 1);
	print(c1);
	// print(c2);

	free_card(c1);
	// free_card(c2);
}
struct card creat_card(const char *name, int atk, int def){
	struct card c;
	c.name = malloc(sizeof(name) + 1);
	if (c.name == NULL) exit(1);
	strcpy(c.name, name);
	c.atk = atk;
	c.def = def;
	return c;
}
void free_card(struct card c){
	free(c.name);
}
void print(struct card p){
	printf("name = %s\n", p.name);
	printf("atk %d\n", p.atk);
	printf("def %d\n", p.def);
}
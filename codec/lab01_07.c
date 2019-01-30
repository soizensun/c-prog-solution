#include <stdio.h>
int main(int argc, char const *argv[])
{
	int am;
	int one;
	int five, five1;
	int tw, tw1;
	int ff, ff1;
	printf("Enter an amount: ");
	scanf("%d",&am);
	ff = am / 50;
	ff1 = am - ff*50;
	tw = ff1 / 20;
	tw1 = ff1 - tw*20;
	five = tw1 / 5;
	five1 = tw1 - five*5;
	one = five1 / 1;
	printf("1: %d\n",one );
	printf("5: %d\n",five );
	printf("20: %d\n",tw );
	printf("50: %d\n",ff );
	return 0;
}

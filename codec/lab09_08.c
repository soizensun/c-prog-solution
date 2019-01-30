#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

....

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}
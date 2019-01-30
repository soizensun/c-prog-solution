#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main(){
	int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];
 	// initialize array numbers from 1 to num by numbersPtr
    for (i = 1; i <= num; i++, numbersPtr++){
    	*numbersPtr = i;
    }

    // loop through count
    for (i = 0; i < count; i++) {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }
    numbersPtr = &numbers[0];

    // print elements in numbers using numberPtr
    for (i = 0; i < num; i++, numbersPtr++) {
           printf("%d ", *numbersPtr);
    }
    puts("");

}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target){
	int i;
 
    for (i = 0; array[i] != target; i++);
 
    for (; i < size; i++) {
        if (i == size - 1)
            array[i] = 0;
        else
            array[i] =  array[i + 1];
    }
}
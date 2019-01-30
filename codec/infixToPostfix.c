#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define STACK_SIZE 100
#define FACTOR_SIZE 10

// check prime number
int is_prime(int num) {
  if (num <= 1) return 0;
  if (num % 2 == 0 && num > 2) return 0;
  for(int i = 3; i < num / 2; i+= 2) {
    if (num % i == 0)
      return 0;
  }
  return 1;
}

// print array
void print(int* factors) {
  printf("%d", factors[0]);

  for (int i = 1; factors[i] != 0; ++i)
    printf(" %d", factors[i]);

  printf("\n");
}

// copy factors to stack
void copy(int* stack, int* factors) {
  for (int i = 0; i < FACTOR_SIZE; ++i)
    stack[i] = factors[i];
}

// sort array to another
void sort_another_array(int* param, int* target, int size) {
  for (int i = 0; i < size; ++i) {
    int j = i - 1;
    while (j >= 0 && target[j] > param[i]) {
      target[j+1] = target[j];
      --j;
    }
    target[j+1] = param[i];
  }
}

// check is array is equals
int equals(int* arr_a, int* arr_b) {
  int _a[FACTOR_SIZE], _b[FACTOR_SIZE];

  sort_another_array(arr_a, &_a[0], FACTOR_SIZE);
  sort_another_array(arr_b, &_b[0], FACTOR_SIZE);

  for (int i = 0; i < FACTOR_SIZE; ++i) {
    if (_a[i] != _b[i])
      return FALSE;
  }

  return TRUE;
}

// loop back and update variable
void loop_back(int* factors, int* divider, int* number, int* index) {
  int last_multiply, last_divider, i;

  for (i = 0; factors[i] != 0; ++i);

  *divider = factors[i - 2] + 1;
  *number = factors[i - 1] * factors[i - 2];
  *index = *index - 2;

  factors[i - 1] = 0;
  factors[i - 2] = 0;
}

int main() {
  int template, divider = 2, front = 2, top = 0;
  int stack[STACK_SIZE][FACTOR_SIZE];

  // get number as a template
  scanf("%d", &template);

  // check prime number first
  if (is_prime(template) || template == 1) {
    printf("%d\n", template);
    return 0;
  }

  if (template == 2 || template < 1) {
    printf("0\n");
    return 0;
  }

  int factors[FACTOR_SIZE] = {0};
  int number = template;
  int index = 0;

  while (front < template) {
    // loop to find factors
    if (number % divider == 0) {
      factors[index] = divider;

      if (index == 0) front = divider;

      ++index;
      number /= divider;
    } else {
      ++divider;
    }

    if (divider > number) {
      divider = number;
    }

    // append data to stack
    if (number == 1) {
      int is_equal = FALSE;

      for (int i = 0; i < top; ++i) {
        is_equal = equals(stack[i], factors);
        if (is_equal) break;
      }

      if (!is_equal) {
        copy(stack[top], factors);
        ++top;
      }

      loop_back(factors, &divider, &number, &index);
    }
  }

  // remove the number itself (-1)
  printf("%d\n", top - 1);
  // print the stack
  for (int i = 0; i < top - 1; i++) {
    print(stack[i]);
  }

  return 0;
}

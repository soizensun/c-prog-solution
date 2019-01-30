#include <stdio.h>
#include <string.h>

typedef struct {
  char name[11];
  double total_grade;
  double total_subject;
  double avg;
} Grade;

// check name is in array
int in_array(Grade* arr, int size, char* name) {
  for (int i = 0; i < size; i++) {
    if (!strcmp(arr[i].name, name)) {
      return i;
    }
  }
  return -1;
}

double max_grade(Grade* arr, int size) {
  double max = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i].avg > max) {
      max = arr[i].avg;
    }
  }
  return max;
}

int main() {
  int total_input, size = 0, counter = 0;
  scanf("%d", &total_input); getchar();

  Grade grades[total_input];

  // receive user input
  for (int i = 0; i < total_input; i++) {
    char name[11];
    int index;
    double grade;

    scanf("%s %lf", name, &grade);

    if ((index = in_array(grades, i, name)) != -1) {
      grades[index].total_grade += grade;
      grades[index].total_subject += 1.00;

      i--;
    } else {
      grades[i].total_grade = grade;
      grades[i].total_subject = 1.00;
      strcpy(grades[i].name, name);

      size++;
    }

    if(++counter == total_input) {
      break;
    }
  }

  // find average grade
  for (int i = 0; i < size; i++) {
    grades[i].avg = grades[i].total_grade / grades[i].total_subject;
  }

  // find maximum grade and print the name
  double max = max_grade(grades, size);

  for (int i = 0; i < size; i++) {
    if (grades[i].avg == max) {
      printf("%s\n", grades[i].name);
    }
  }

  return 0;
}

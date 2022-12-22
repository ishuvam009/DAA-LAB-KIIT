/* WAP to implement the Insertion Sort Algorithm in C. */
#include <stdio.h>


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;


    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main() {
  int data[] = {5, 9, 3, 11, 2};
  int size = sizeof(data) / sizeof(data[0]);
  insertSort(data, size);
  printf("After sorting array elements are:\n");
  printArray(data, size);
}
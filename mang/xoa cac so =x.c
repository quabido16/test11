#include <stdio.h>

void inputArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
}

void displayArray(int arr[], int size) {
  int i;
  printf("The array is: ");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void removeElement(int arr[], int size, int x) {
  int i, j;
  for (i = 0; i < size; i++) {
    if (arr[i] == x) {
      for (j = i; j < size - 1; j++) {
        arr[j] = arr[j + 1];
      }
      size--;
      i--;
    }
  }
  printf("After removing %d, the new array is: ", x);
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int size, x;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  inputArray(arr, size);
  displayArray(arr, size);
  printf("Enter the number to be removed: ");
  scanf("%d", &x);
  removeElement(arr, size, x);
  return 0;
}


#include <stdio.h>
#define MAX_SIZE 100
int main() {
// Declare an array to store the numbers
int numbers[MAX_SIZE];
// Declare a variable to store the number of integers
int n;
// Prompt the user to enter the number of integers
printf("Enter the number of integers (n > 0): ");
// Read the number of integers from the keyboard (STDIN)
scanf("%d", &n);
// Prompt the user to enter the numbers
printf("Enter %d integers: ", n);
// Read the numbers from the keyboard (STDIN)
for (int i = 0; i < n; i++) {
scanf("%d", &numbers[i]);
}
// Declare an array to store the number of occurrences of each element
int occurrences[MAX_SIZE] = {0};
// Loop through the array of numbers and count the number of occurrences of each element
for (int i = 0; i < n; i++) {
occurrences[numbers[i]]++;
}
// Print the number of occurrences of each element
printf("Number of occurrences of each element:\n");
for (int i = 0; i < MAX_SIZE; i++) {
if (occurrences[i] > 0) {
printf("%d-%d\n", i, occurrences[i]);
}
}
return 0;
}

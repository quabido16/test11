#include <stdio.h>
int main() {
int n, sum;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
scanf("%d", &sum);
for (int i = 0; i < n-1; i++) {
for (int j = i+1; j < n; j++) {
if (arr[i] + arr[j] == sum) {
printf("%d\n%d", i, j);
return 0;
}
}
}
return 0;
}

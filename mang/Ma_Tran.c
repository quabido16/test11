#include <stdio.h>

int main() {
  int m, n;
  printf("Nhap so hang m: ");
  scanf("%d", &m);
  printf("Nhap so cot n: ");
  scanf("%d", &n);
  
  // In ra ma tr?n
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("* ");
    }
    printf("\n");
  }
  
  return 0;
}


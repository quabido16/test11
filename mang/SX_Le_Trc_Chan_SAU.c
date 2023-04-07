#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // S?p x?p m?ng theo th? t? tãng d?n
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // S?p x?p s? l? trý?c, s? ch?n sau
    int b[n], c[n];
    int count_b = 0, count_c = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[count_b] = a[i];
            count_b++;
        } else {
            c[count_c] = a[i];
            count_c++;
        }
    }

    // G?p m?ng s? l? và s? ch?n l?i
    for (i = 0; i < count_b; i++) {
        a[i] = b[i];
    }
    for (i = 0; i < count_c; i++) {
        a[count_b+i] = c[i];
    }

    // In m?ng sau khi s?p x?p
    printf("Mang sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

#define MAX_N 100

int main() {
    int n, a[MAX_N], freq[MAX_N] = {0};

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Nh?p m?ng
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ð?m s? l?n xu?t hi?n c?a các ph?n t?
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    // In ra s? l?n xu?t hi?n c?a 2 ph?n t? phân bi?t ð?u tiên trong m?ng
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (freq[a[i]] > 0) {
            count++;
            printf("%d xuat hien %d lan\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
        if (count == 2) {
            break;
        }
    }

    return 0;
}


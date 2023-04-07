#include <stdio.h>

int main() {
    int n, i, j, num, count[1000] = {0}, max_count = 0, max_num;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    // Nhap mang
    int arr[n];
    printf("Nhap cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tinh so lan xuat hien cua cac so co 3 chu so
    for (i = 0; i < n; i++) {
        if (arr[i] >= 100 && arr[i] <= 999) {
            num = arr[i];
            count[num]++;
        }
    }

    // Tim so lan xuat hien nhieu nhat
    for (i = 100; i <= 999; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_num = i;
        }
    }

    // In ra cac so co so lan xuat hien trung nhau nhieu nhat
    printf("Cac so co so lan xuat hien trung nhau nhieu nhat la:\n");
    for (i = 100; i <= 999; i++) {
        if (count[i] == max_count) {
            printf("%d ", i);
        }
    }

    return 0;
}


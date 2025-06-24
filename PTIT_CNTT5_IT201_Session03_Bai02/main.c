#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Nhap so luong phan tu
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So luong phan tu phai lon hon 0!\n");
        }
    } while (n <= 0);

    // Cap phat bo nho dong
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    // Nhap cac phan tu
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Tim phan tu lon nhat
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // In ket qua
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    // Giai phong bo nho
    free(arr);

    return 0;
}

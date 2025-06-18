#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n, target;
    int *arr;
    bool found = false;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong khong hop le.\n");
        return 1;
    }

    // Cấp phát động mảng
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap tong can tim: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Cap tim duoc: %d, %d\n", arr[i], arr[j]);
                found = true;
                break;
            }
        }
    }

    if (!found) {
        printf("Khong tim thay\n");
    }

    free(arr); //
    return 0;
}

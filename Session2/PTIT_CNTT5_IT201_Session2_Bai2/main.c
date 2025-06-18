#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, value;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong khong hop le.\n");
        return 0;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) return 1;

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri muon chen: ");
    scanf("%d", &pos);

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n) {
        printf("Khong hop le\n");
        free(arr);
        return 0;
    }

    int *newArr = realloc(arr, (n + 1) * sizeof(int));
    if (!newArr) {
        free(arr);
        return 1;
    }
    arr = newArr;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    printf("Mang sau khi chen:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    free(arr);
    return 0;
}

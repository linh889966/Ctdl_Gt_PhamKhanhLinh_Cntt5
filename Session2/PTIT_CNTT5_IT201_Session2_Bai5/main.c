#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;

    printf("Nhap so phan tu: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *arr = malloc(n * sizeof(int));
    if (!arr) return 0;

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Khong hop le\n");
        free(arr);
        return 0;
    }

    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    int *tmp = realloc(arr, n * sizeof(int));
    if (tmp) arr = tmp;

    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}

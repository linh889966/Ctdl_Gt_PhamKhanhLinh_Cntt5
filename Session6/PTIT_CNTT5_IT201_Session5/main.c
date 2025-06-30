#include <stdio.h>

// Ham de quy tim gia tri lon nhat trong mang
int timMax(int arr[], int i, int n, int max) {
    if (i == n) return max;
    if (arr[i] > max) max = arr[i];
    return timMax(arr, i + 1, n, max);
}

// Ham de quy tim gia tri nho nhat trong mang
int timMin(int arr[], int i, int n, int min) {
    if (i == n) return min;
    if (arr[i] < min) min = arr[i];
    return timMin(arr, i + 1, n, min); // sua i - 1 thanh i + 1
}

int main() {
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong hop le!\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = timMax(arr, 0, n, arr[0]);
    printf("Gia tri lon nhat trong mang la: %d\n", max);

    int min = timMin(arr, 0, n, arr[0]);
    printf("Gia tri nho nhat trong mang la: %d\n", min);

    return 0;
}

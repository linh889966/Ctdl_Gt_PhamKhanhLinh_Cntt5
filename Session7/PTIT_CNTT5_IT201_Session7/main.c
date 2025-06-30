#include <stdio.h>

void printArray(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int arr[n];
    int negatives[n], zeros[n], positives[n];
    int negCount = 0, zeroCount = 0, posCount = 0;

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Phân loại
        if (arr[i] < 0)
            negatives[negCount++] = arr[i];
        else if (arr[i] == 0)
            zeros[zeroCount++] = arr[i];
        else
            positives[posCount++] = arr[i];
    }

    // In mảng ban đầu
    printf("before = ");
    printArray(arr, n);

    // Tạo mảng kết quả
    int result[n], index = 0;
    for (int i = 0; i < negCount; i++) result[index++] = negatives[i];
    for (int i = 0; i < zeroCount; i++) result[index++] = zeros[i];
    for (int i = 0; i < posCount; i++) result[index++] = positives[i];

    // In mảng sau sắp xếp theo phân loại
    printf("after = ");
    printArray(result, n);

    return 0;
}

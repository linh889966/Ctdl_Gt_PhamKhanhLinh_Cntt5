#include <stdio.h>
#include <stdlib.h>  // để dùng malloc

int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {
    int n = 5;
    int* array = mallocArray(n);

    printf("Mảng đã cấp phát:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    free(array);
    return 0;
}

// Độ phứ tạp có for v chạy từ n thuộc tuyến tính : O(n)
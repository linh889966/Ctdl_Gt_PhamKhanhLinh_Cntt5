#include <stdio.h>

// Hàm sắp xếp Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Độ phức tạp thời gian: O(n²) vì dùng 2 vòng lặp lồng nhau duyệt n lần
// Độ phức tạp không gian: O(1) vì chỉ dùng biến tạm, không cấp phát thêm mảng phụ
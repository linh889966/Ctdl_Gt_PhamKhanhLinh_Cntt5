#include <stdio.h>
//sécion sắp xếp lựa chọn dùng trong...
// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm sắp xếp chọn (Selection Sort)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Hoán đổi phần tử nhỏ nhất với arr[i]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;
    printf("Nhap vao so luong phan tu (0 < n < 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // In mảng trước khi sắp xếp
    printf("before: ");
    printArray(arr, n);

    // Gọi hàm sắp xếp
    selectionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("after: ");
    printArray(arr, n);

    return 0;
}

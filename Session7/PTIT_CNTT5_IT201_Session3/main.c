#include <stdio.h>
//từ trái qua phải, chèn phần t vào đúng vị trí sắp xếp
// Hàm sắp xếp chèn
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Di chuyển các phần tử lớn hơn key về phía sau
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu (0 < n < 1000): ");
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
    insertionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("after: ");
    printArray(arr, n);

    return 0;
}

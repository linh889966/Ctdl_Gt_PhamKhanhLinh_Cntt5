#include <stdio.h>

// Hàm in mảng theo định dạng [a, b, c, ...]
void printArray(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" , ");
        }
    }
    printf(" ]\n");
}

// Hàm trộn 2 mảng con
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Sao chép dữ liệu sang mảng tạm
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Trộn hai mảng con L[] và R[] lại thành arr[]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Sao chép phần còn lại (nếu có)
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Hàm Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);

    // Kiểm tra tính hợp lệ
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int arr[n];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // In trước khi sắp xếp
    printf("before = ");
    printArray(arr, n);

    // Gọi hàm Merge Sort
    mergeSort(arr, 0, n - 1);

    // In sau khi sắp xếp
    printf("after = ");
    printArray(arr, n);

    return 0;
}

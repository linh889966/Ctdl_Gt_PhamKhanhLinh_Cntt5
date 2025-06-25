#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1;
    }

    int *arr = (int *)malloc(size * sizeof(int)); // Cấp phát động
    if (arr == NULL) {
        printf("Khong du bo nho.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int numCheck;
    printf("Nhap vao phan tu muon tim: ");
    scanf("%d", &numCheck);

    for (int i = 0; i < size; i++) {
        if (arr[i] == numCheck) {
            printf("Phan tu xuat hien dau tien tai vi tri: %d\n", i);
            free(arr); // Giải phóng bộ nhớ
            return 0;
        }
    }

    printf("Khong ton tai phan tu do trong mang.\n");
    free(arr);
    return 0;
}

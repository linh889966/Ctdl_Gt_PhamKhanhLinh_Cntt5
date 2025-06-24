#include <stdio.h>
#include <stdlib.h>

int main() {
    // B1: cấp phát bộ nhớ ban đầu bằng malloc (5 phần tử)
    int *arr = (int *) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Khong cap phat duoc bo nho \n");
        return 1;
    }

    // In ra các giá trị ban đầu (chưa được gán nên giá trị rác)
    for (int i = 0; i < 5; i++) {
        printf("%d \n", arr[i]);
    }

    // B2: thay đổi kích thước bộ nhớ: tăng lên 8 phần tử
    arr = (int *) realloc(arr, 8 * sizeof(int));
    if (arr == NULL) {
        printf("Khong the tang kich thuoc o nho \n");
        return 1;
    }

    // B3: gán giá trị cho các phần tử mới được cấp phát
    for (int i = 5; i < 8; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Hiển thị toàn bộ mảng sau khi mở rộng (gồm cả phần cũ và mới)
    for (int i = 0; i < 8; i++) {
        printf("%d \n", arr[i]);
    }

    // B4: giải phóng bộ nhớ
    free(arr);

    return 0;
}

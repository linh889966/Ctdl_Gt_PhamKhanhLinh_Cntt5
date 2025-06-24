#include <stdio.h>
#include <stdlib.h>

int main() {
    // B1: Cấp phát bộ nhớ động ban đầu bằng calloc (5 phần tử)
    int *arr = (int *) calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Khong cap phat duoc bo nho \n");
        return 1;
    }

    // In các giá trị ban đầu (sẽ là 0 do calloc)
    for (int i = 0; i < 5; i++) {
        printf("%d \n", arr[i]);
    }

    // B2: Thay đổi kích thước bộ nhớ: tăng lên 8 phần tử
    arr = (int *) realloc(arr, 8 * sizeof(int));
    if (arr == NULL) {
        printf("Khong tang kich thuoc o nho \n");
        return 1;
    }

    // B3: Gán giá trị cho các ô mới mở rộng
    for (int i = 5; i < 8; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Hiển thị toàn bộ mảng sau khi mở rộng
    for (int i = 0; i < 8; i++) {
        printf("%d \n", arr[i]);
    }

    // B4: Giải phóng bộ nhớ
    free(arr);

    return 0;
}

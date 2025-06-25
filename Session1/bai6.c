#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 4, 5, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("Phần tử %d xuất hiện %d lần trong mảng.\n", x, count);
    return 0;
}
// Độ phức tạp thời gian: O(n) vì vòng lặp chạy n lần để duyệt toàn bộ mảng
// Độ phức tạp không gian: O(1) vì chỉ sử dụng một số biến đơn, không cấp phát thêm bộ nhớ
// Created by LOQ on 6/16/2025.
//

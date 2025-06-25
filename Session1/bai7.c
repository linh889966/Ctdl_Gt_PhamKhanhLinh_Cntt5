#include <stdio.h>
#include <stdbool.h>

bool hasElementExactly2(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count == 2) return true;
    }
    return false;
}

int main() {
    int arr[] = {3, 5, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (hasElementExactly2(arr, n))
        printf("Có phần tử xuất hiện đúng 2 lần.\n");
    else
        printf("Không có phần tử nào xuất hiện đúng 2 lần.\n");

    return 0;
}
//Độ phức tạp thời gian: O(n²) – 2 vòng for lồng nhau
// Độ phức tạp không gian: O(1) – dùng biến đếm đơn giản
// Created by LOQ on 6/16/2025.
//

#include <stdio.h>

int main() {
    int arr[] = {2, 3, 5, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, mostFreq = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    printf("Phần tử xuất hiện nhiều nhất: %d (%d lần)\n", mostFreq, maxCount);
    return 0;
}
//ĐPTKG : O(n²) – 2 vòng lặp lồng nhau
//ĐPTTG :  O(1) – chỉ dùng 1 mảng
// Created by LOQ on 6/16/2025.
//

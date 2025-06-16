#include <stdio.h>

int main() {
    int n;
    printf("Nhập số lần in: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Hello\n");
    }

    return 0;
}

//độ phức tạp thời gian chạy O(n) vì tuyên tính tăng theo n lần có for
// Created by LOQ on 6/16/2025.
//

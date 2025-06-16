#include <stdio.h>

int main() {
    int n;
    printf("Nhập số n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tổng từ 1 đến %d là: %d\n", n, sum);
    return 0;
}

//Độ phúc tạp không gian là O(1)
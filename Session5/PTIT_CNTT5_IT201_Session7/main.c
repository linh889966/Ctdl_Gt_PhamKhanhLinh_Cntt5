#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap so luong so Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input khong hop le\n");
        return 0;
    }

    int fib[100];
    for (int i = 0; i < n; i++) {
        fib[i] = fibonacci(i);
    }

    printf("Mang Fibonacci: [");
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}

#include <stdio.h>

int giaiThua(int n) {
    if (n == 1) return 1;
    return n * giaiThua(n - 1);
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong hop le!\n");
    } else {
        int ketqua = giaiThua(n);
        printf("Giai thua cua %d la: %d\n", n, ketqua);
    }

    return 0;
}

#include <stdio.h>
int sum(int n) {
    if (n==1) {
        return 1;
    }
    return n + sum(n-1);
}
int main () {
    int n;
    printf("Nhap vao 1 so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Khong hop le!\n");
    }else {
        int tong = sum(n);
        printf("tong tu 1 den %d la %d",n, tong);
    }
    return 0;
}
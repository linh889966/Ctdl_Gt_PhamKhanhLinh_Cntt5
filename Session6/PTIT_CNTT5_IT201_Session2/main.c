#include <stdio.h>
#include <stdlib.h>
int fibonacci(int soNguyen) {
    if (soNguyen == 0) return 0;
    if (soNguyen == 1) return 1;
    return fibonacci(soNguyen-1)+fibonacci(soNguyen-2);

}
void inFibonacci(int soNguyen) {
    if (soNguyen == 0 ) return;
    // printf(" %d", fibonacci(soNguyen-1));
    if (soNguyen > 1) printf(" %d", fibonacci(soNguyen-1));
    inFibonacci(soNguyen-1);
}
int main () {
    int soNguyen;
    printf("Nhap vao so nguyen bat ky :");
    scanf("%d",&soNguyen);
    if (soNguyen <= 0) {
        printf("So nguyen duong phai lon hon 0 va khong duoc nho hon 0 !");
    }
    inFibonacci(soNguyen);
    printf("\n");

    return 0;
}
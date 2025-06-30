#include <stdio.h>

int demSoCachLeo(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return demSoCachLeo(n - 1) + demSoCachLeo(n - 2);
}

int main() {
    int n;
    printf("Nhap so bac cua cau thang: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Input khong hop le\n");
    } else {
        int soCach = demSoCachLeo(n);
        printf("%d\n", soCach);
    }

    return 0;
}
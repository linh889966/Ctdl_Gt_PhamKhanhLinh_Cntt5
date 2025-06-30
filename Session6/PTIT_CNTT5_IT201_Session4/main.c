
#include <stdio.h>

void thapHaNoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("Đĩa 1 di chuyển từ %c sang %c\n", A, C);
        return;
    }
    thapHaNoi(n - 1, A, C, B);
    printf("Đĩa %d di chuyển từ %c sang %c\n", n, A, C);
    thapHaNoi(n - 1, B, A, C);
}

int main() {
    int n;
    printf("Nhap so luong dia: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input khong hop le\n");
    } else {
        thapHaNoi(n, 'A', 'B', 'C');
    }

    return 0;
}
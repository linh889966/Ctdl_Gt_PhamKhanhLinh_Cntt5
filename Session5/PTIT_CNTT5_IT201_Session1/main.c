#include <stdio.h>

// Hàm đệ quy để in các số từ 1 đến n
void inSo(int n) {
    if (n == 0) return;       // Điều kiện dừng
    inSo(n - 1);              // Gọi đệ quy
    printf("%d ", n);         // In sau đệ quy để ra đúng thứ tự 1 -> n
}

int main() {
    int n;
    printf("Moi ban nhap vao 1 so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Khong hop le!\n");
    } else {
        printf("Cac so tu 1 den %d:\n", n);
        inSo(n);
    }

    return 0;
}

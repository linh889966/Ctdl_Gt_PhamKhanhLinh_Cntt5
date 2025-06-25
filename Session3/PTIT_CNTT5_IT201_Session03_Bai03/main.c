#include <stdio.h>
#include <stdlib.h>

// Hàm tính trung bình cộng số chẵn trong mảng
float tinhTrungBinhChan(int *arr, int n) {
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            tong += arr[i];
            dem++;
        }
    }
    if (dem == 0) return -1; // Không có số chẵn
    return (float)tong / dem;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiểm tra điều kiện n hợp lệ
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    // Cấp phát bộ nhớ động
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong cap phat duoc bo nho\n");
        return 1;
    }

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tính trung bình cộng
    float ketQua = tinhTrungBinhChan(arr, n);
    if (ketQua == -1) {
        printf("Khong co so chan trong mang\n");
    } else {
        printf("Trung binh cong cac so chan = %.2f\n", ketQua);
    }

    // Giải phóng bộ nhớ
    free(arr);
    return 0;
}

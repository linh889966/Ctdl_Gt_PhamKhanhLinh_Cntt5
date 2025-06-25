//Cho người dùng nhập vào mảng , nhập vào phần tủ từ bn phím và in ra
// Created by LOQ on 6/22/2025.
#include <stdio.h>
int main () {
    int n;
    //nhap so luong phan tu mang
    printf("Nhap so luong phan tu mang la : \n");
    scanf("%d",&n);
    //dieu kien
    if (n <=0 || n>100) {
        printf("Khong hop le");
        return 1;
    }
    int arr[100]; //khai bao mang kich thoc toi da
    //nhap vao so phan tu
    for (int i=0; i<n; i++) {
        printf("Phan tu thu %d", i+1, n);
        scanf("%d", &arr[i]);
    }
    //in ra
    printf("Mang vu nhap la :\n");
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }


    return 0;
}

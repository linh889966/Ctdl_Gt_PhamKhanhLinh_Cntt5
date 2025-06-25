//Khai báo mảng số nguyên có 5 phần tử, yêu cầu người dùng nhập lần lượt từng phần tử trong mảng, sau khi nhập xong thì in mảng ra màn hình.
// Created by LOQ on 6/22/2025.
//
#include <stdio.h>
int main(){
    int arr[5];
    printf("Moi ban nhap 5 so vao mang :\n"); // nhập vào 5 phần tử
    for(int i=0; i<5; i++){
        printf("Phan tu thu %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Phan tu vua nhap la :");
    for (int i=0; i<5; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}

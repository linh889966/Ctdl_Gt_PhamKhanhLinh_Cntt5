//Khai báo mảng số nguyên có 4 phần tử, yêu cầu người dùng nhập lần lượt từng phần tử trong mảng, sau khi nhập xong thì in mảng ra màn hình.
#include <stdio.h>
int main() {
    int arr[4];
    printf("Moi ban nhap vao 4 phan tu : \n");
    for (int i=0; i<4; i++) {
        printf("Nhap vao phan tu %d :", i+1, &arr[i]);
        scanf("%d", &arr[i]);
    }

    printf("Phan tu vua nhap la :\n");
    for (int i=0; i<4; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
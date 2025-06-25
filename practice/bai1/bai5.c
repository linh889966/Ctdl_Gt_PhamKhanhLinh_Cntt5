//nhap mang co 5 phan tu , xap xep theo thu tu giam dan va in ra
// Created by LOQ on 6/22/2025.
//
#include <stdio.h>
int main () {
    int n;
    printf("Nhap so phan tu:\n");
    scanf("%d",&n);
    if (n <=0 || n>100) {
        printf("Khong hop le");
        return 1;
    }
    int arr[100];
    for (int i=0; i<n; i++) {
        printf("Phan tu thu %d", i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    printf("Mang tang dan la :\n");
    for (int i=0; i<n; i++) {
        printf("Phan tu thu %d", i+1, arr[i]);
    }
    return 0;
}

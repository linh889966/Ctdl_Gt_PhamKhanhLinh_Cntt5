//bubble sort- sắp xếp nổi bọt- đổi chỗ phần tử tại vì tr-lặp cho đến khi đúng
// Created by LOQ on 6/22/2025.
//
#include <stdio.h>
int main () {
    int arr[4]= {9,5,8,4};
    int arrSize = sizeof(arr)/sizeof(int);

    printf("Mang ban dau la:\n");
    for (int i=0; i<arrSize; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    for (int i=0; i<arrSize; i++) {
        for (int j=0; j<arrSize-1-i; j++) {
            if (arr[j+1]<arr[j]) {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    printf("Mang sau khi sap xep la : \n");
    for (int i=0; i<arrSize; i++) {
        printf("%d \t", arr[i]);
    }
    return 0;
}
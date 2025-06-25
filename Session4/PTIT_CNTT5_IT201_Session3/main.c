#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    int *arr;
    do {
        printf("Nhap vao so luong phan tu: ");
        scanf("%d", &n);
    }while (n <= 0);
    arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &arr[i]);
    };
    int checkNum= arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < checkNum) {
            checkNum = arr[i];
            printf("vi tri co so nho nhat dau tien la %d", i);

        }
    }

    free(arr);
    return 0;
}

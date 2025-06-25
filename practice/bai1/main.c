#include <stdio.h>

int main() {
    int arr1[]= {1,2,3};
    int arr2[]= {4,5,6};
    int arr3[]= {7,8,9};
    int arr4[]= {10,11,12};

    int listArr[4][3]= {{1,2,3},{4,5,6},{7,8,9},{10,11,12}} ;
    printf("Mảng thứ nhất có chỉ 2 là : %d\n", listArr[0][2]);
    return 0;
}
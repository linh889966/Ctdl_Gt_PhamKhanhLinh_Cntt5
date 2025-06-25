#include <stdio.h>
int main(){
    int arr= [1,2,3,4];
    int lenght= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        printf("Các phần tử của mảng là : %d",arr[i]);
    }
    printf("độ dài mảng là : %d \n",lenght);
    return 0;
}
//
// Created by LOQ on 6/17/2025.
//

#include <stdio.h>
int main() {
    int arr[]= {1,2,3,4
};
int length= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<length;i++){
printf("Các phần tử của mảng là : %d\n",arr[i]);
}
printf("độ dài mảng là :%d\n",length);
return 0;
}

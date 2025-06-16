#include <stdio.h>
int main(){
int n;
printf("Nhập số:");
scanf("%d",&n);
int sum = 0;
for(int i=1;i<=n;i++){
sum=sum+i;}
printf("Tổng là : %d",sum);
return 0;
}
// Độ phức tạp không gian là O(n) vì chạu n lần
//Độ phức tạp tời gian là O(1) vì biến nhỏ , chạy nhanh
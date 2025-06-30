#include <stdio.h>
int tong(int n) {
    if(n == 0) return 0;
    return n%10 + tong(n/10);

}
int main() {
    int n;
    printf("Moi ban nhap vao so so nguyen");
    scanf("%d",&n);

   if (n<=0) {
       printf("Khong hop le !");
   }
    int tongsonguyen = tong(n);
    printf("Tong cac so nguyen la %d", tongsonguyen);

    return 0;
}
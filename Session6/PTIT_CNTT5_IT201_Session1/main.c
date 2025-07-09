#include <stdio.h>
#include <stdlib.h>
int ktsonguyen(int songuyen) {
    if(songuyen ==0) return 0;
    ktsonguyen(songuyen/2);
    printf("%d\n", songuyen%2);

}
int main() {
    int soNguyen;
    printf("Moi ban nhap vao so nguyen bat ky :");
    scanf("%d", &soNguyen);

    int ketQua= ktsonguyen(soNguyen);
    if (soNguyen <= 0 ) {
        printf("Khong hop le !");
    }else {
        printf("Hop le nguyen %d", ketQua);
    }
    return 0;
}
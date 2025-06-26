#include <stdio.h>
#include <string.h>

int isPalin( char str[], int left, int right) {
    //dieu kien dung
    if (left > right) {
        return 0;
    }
    if (str[left] != str[right]) {
        return 0;
    }
    //ham goi lai chinh no
    return isPalin( str, right - 1, left +1 );

}
int main () {

    char str[50];
    printf("Moi ban nhap vao chuoi :");
    scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    int len = strlen(str);
    int result = isPalin(str, 0, len-1);
    if (result == 1) {
        printf("Doi xung");
    }else {
        printf("Khong doi xung");
    }
    return 0;
}

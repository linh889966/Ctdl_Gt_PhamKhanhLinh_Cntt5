#include <stdio.h>
#include <string.h>

// Hàm sắp xếp ký tự theo thứ tự a → z (bubble sort)
void sortCharacters(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Hoán đổi nếu sai thứ tự
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[1000];

    // Nhập chuỗi ký tự
    printf("Nhap chuoi ky tu: ");
    scanf("%s", str);  // Đọc đến khoảng trắng

    // In chuỗi trước khi sắp xếp
    printf("Truoc khi sap xep: %s\n", str);

    // Gọi hàm sắp xếp
    sortCharacters(str);

    // In chuỗi sau khi sắp xếp
    printf("Sau khi sap xep: %s\n", str);

    return 0;
}

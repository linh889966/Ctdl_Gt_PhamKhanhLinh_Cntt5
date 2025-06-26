#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidNumber(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) return 0;
    }
    return 1;
}

int stringToInt(char str[], int n) {
    if (n == 0) return 0;
    return stringToInt(str, n - 1) * 10 + (str[n - 1] - '0');
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%s", str);

    if (!isValidNumber(str)) {
        printf("Input khong hop le\n");
    } else {
        int result = stringToInt(str, strlen(str));
        printf("So nguyen: %d\n", result);
    }

    return 0;
}

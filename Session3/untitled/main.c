#include <stdio.h>
#include <math.h>

// Hàm hiển thị menu
void displayMenu(void) {
    printf("\n========= Menu =========\n");
    printf("1. Tinh tong 2 so\n");
    printf("2. Tinh binh phuong tong 2 so\n");
    printf("3. Tinh can bac 2 tong 2 so\n");
    printf("4. Thoat\n");
}

// Hàm tính tổng 2 số
float calculateSum(float number1, float number2) {
    float sum = number1 + number2;
    return sum;
}

int main(int argc, const char * argv[]) {
    int command;
    float a, b, sum, result, sqRootResult;

    do {
        displayMenu();
        printf("Moi ban nhap vao lua chon cua minh: ");
        scanf("%d", &command);

        switch (command) {
            case 1:
                printf("Nhap 1 so: ");
                scanf("%f", &a);
                printf("Nhap 2 so: ");
                scanf(" %f", &b);
                sum = calculateSum(a, b);
                printf("Tong 2 so = %.1f\n", sum);
                break;

            case 2:
                printf("Nhap 2 so: ");
                scanf("%f %f", &a, &b);
                sum = calculateSum(a, b);
                result = sum * sum;
                printf("Tong 2 so binh phuong = %.1f\n", result);
                break;

            case 3:
                printf("Nhap 2 so: ");
                scanf("%f %f", &a, &b);
                sum = calculateSum(a, b);
                sqRootResult = sqrt(sum);
                printf("Can bac 2 tong 2 so = %.1f\n", sqRootResult);
                break;

            case 4:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long nhap tu 1 -> 4.\n");
                break;
        }
    } while (command != 4);

    return 0;
}

// Viết chương trình nhập vào số lượng phần tử là n với (0 < n < 1000)
//
// Yêu cầu: Bubble sort-so sanh từng ặp phần tử liền kề nếu sai thứ tự sẽ hoán đổi lại
//
// Viết hàm sắp xếp theo thuật toán nổi bọt (Bubble Sort)
// Nhập vào số lượng phần tử n
// Nhập vào các phần tử của mảng
// In kết quả trước khi sắp xếp
// Thực hiện gọi hàm sắp xếp theo thuật toán nổi bọt
// In kết quả sau khi sắp xếp
#include <stdio.h>
void inmang (int n, int arr[]){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }}
void sapxep( int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi nếu sai thứ tự
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Nhap vao so luong phan tu :");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }


    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi sap xep la :");
    inmang(n, arr);
    sapxep(arr, n);

    printf("Mang sau khi sap xep la ");
   inmang(n, arr);

    return 0;
}
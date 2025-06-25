#include <stdio.h>

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Các phần tử lớn hơn tất cả phần tử phía sau là:\n");

    for (int i = 0; i < n; i++) {
        int isGreater = 1;  // giả định ban đầu là lớn hơn hết

        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isGreater = 0;  // không lớn hơn phần tử phía sau nào đó
                break;
            }
        }

        if (isGreater) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

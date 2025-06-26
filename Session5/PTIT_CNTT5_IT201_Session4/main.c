#include <stdio.h>

// Hàm tính tổng từ start đến end bằng đệ quy
int tinhTong(int start, int end) {
    if (start == end) {
        return end;
    }
    return start + tinhTong(start + 1, end);
}

int main() {
    int start;
    int end;

    // Nhập giá trị bắt đầu và kết thúc
    printf("Nhập số bắt đầu: ");
    scanf("%d", &start);
    printf("Nhập số kết thúc: ");
    scanf("%d", &end);

    // Kiểm tra dữ liệu âm
    if (start < 0 || end < 0) {
        printf("Không được nhập số âm. Start: %d, End: %d\n", start, end);
        return 0;
    }

    // Kiểm tra nếu start lớn hơn end
    if (start > end) {
        printf("Số bắt đầu phải nhỏ hơn hoặc bằng số kết thúc.\n");
        return 0;
    }

    // Gọi hàm tính tổng và in kết quả
    int tong = tinhTong(start, end);
    printf("Tổng từ %d đến %d là: %d\n", start, end, tong);

    return 0;
}

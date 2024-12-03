#include <stdio.h>

int main() {
    // Khoi tao mang
    int arr[] = {5, 3, 7, 5, 8, 5, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang

    // Yêu cau nguoi dùng nhap so can tìm
    int x;
    printf("Nhap so nguyên can tìm: ");
    scanf("%d", &x);

    // Mang luu vi trí các phan tu tìm duoc
    int positions[n];
    int count = 0;

    // Tìm kiem tuyen tính
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i; // Luu vi trí tìm duoc
            count++;
        }
    }

    // In ket qua
    if (count > 0) {
        printf("Phan tu %d duoc tìm thay toi các vi trí: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d không ton tai trong mang.\n", x);
    }

    return 0;
}


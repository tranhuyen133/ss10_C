#include <stdio.h>

int main() {
    // Khoi tao mang
    int arr[] = {5, 3, 7, 5, 8, 5, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang

    // Y�u cau nguoi d�ng nhap so can t�m
    int x;
    printf("Nhap so nguy�n can t�m: ");
    scanf("%d", &x);

    // Mang luu vi tr� c�c phan tu t�m duoc
    int positions[n];
    int count = 0;

    // T�m kiem tuyen t�nh
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i; // Luu vi tr� t�m duoc
            count++;
        }
    }

    // In ket qua
    if (count > 0) {
        printf("Phan tu %d duoc t�m thay toi c�c vi tr�: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d kh�ng ton tai trong mang.\n", x);
    }

    return 0;
}


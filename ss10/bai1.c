#include <stdio.h>

int main() {
    // Kh?i t?o m?ng
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang

    // Nhap phan tu can kiem tra
    int element, found = 0;
    printf("Nhap phan tu can t�m: ");
    scanf("%d", &element);

    // T�m kiem phan tu trong m?ng
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Phan tu %d ton tai o vi tri: %d\n", element, i);
            found = 1; // ��nh dau d� t�m thay phan tu
        }
    }

    // Neu kh�ng t�m thay phan tu
    if (!found) {
        printf("Phan tu %d kh�ng ton tai trong mang.\n", element);
    }

    return 0;
}


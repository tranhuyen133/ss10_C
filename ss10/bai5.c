#include <stdio.h>

// Hàm sap xep Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm tìm kiem nhi phân (Binary Search)
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Neu tìm thay phan tu
        if (arr[mid] == x)
            return mid;

        // Neu phan tu can tìm lon hon, bo qua nua trái
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // Neu không tìm thay
    return -1;
}

// Hàm in mang
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Khoi tao mang
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // In mang ban dau
    printf("Mang ban dau: ");
    printArray(arr, n);

    // Sap xep mang bang Bubble Sort
    bubbleSort(arr, n);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    printArray(arr, n);

    // Yêu cau nguoi dùng nhap phan tu can tìm
    int x;
    printf("Nhap so nguyên can tìm: ");
    scanf("%d", &x);

    // Tìm kiem phan tu bang Binary Search
    int result = binarySearch(arr, n, x);

    // In ket qua
    if (result != -1) {
        printf("Phan tu %d duoc tìm thay toi vi trí: %d\n", x, result);
    } else {
        printf("Phan tu %d không ton tai trong mang.\n", x);
    }

    return 0;
}


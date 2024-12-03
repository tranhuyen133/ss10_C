#include <stdio.h>

// H�m sap xep Bubble Sort
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

// H�m t�m kiem nhi ph�n (Binary Search)
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Neu t�m thay phan tu
        if (arr[mid] == x)
            return mid;

        // Neu phan tu can t�m lon hon, bo qua nua tr�i
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // Neu kh�ng t�m thay
    return -1;
}

// H�m in mang
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

    // Y�u cau nguoi d�ng nhap phan tu can t�m
    int x;
    printf("Nhap so nguy�n can t�m: ");
    scanf("%d", &x);

    // T�m kiem phan tu bang Binary Search
    int result = binarySearch(arr, n, x);

    // In ket qua
    if (result != -1) {
        printf("Phan tu %d duoc t�m thay toi vi tr�: %d\n", x, result);
    } else {
        printf("Phan tu %d kh�ng ton tai trong mang.\n", x);
    }

    return 0;
}


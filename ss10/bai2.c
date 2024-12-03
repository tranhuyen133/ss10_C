#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Duyet qua các phan tu chua duoc sap xep
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán doi neu phan tu truoc lon hon phan tu sau
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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

    // Goi hàm bubbleSort de sap xep mang
    bubbleSort(arr, n);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    printArray(arr, n);

    return 0;
}


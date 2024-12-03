#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Gia su phan tu nho nhat là phan tu hien tai
        int minIndex = i;

        // Tìm phan tu nho nhat trong phan còn lai cua mang
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Hoán doi phan tu nho nhat voi phan tu toi vi trí i
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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

    // Goi hàm selectionSort de sap xep mang
    selectionSort(arr, n);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    printArray(arr, n);

    return 0;
}


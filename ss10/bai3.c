#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Lay phan tu hien tai làm "key"
        int j = i - 1;

        // Di chuyen các phan tu lon hon key sang vi trí phía sau
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Ðat key vào vi trí phù hop
        arr[j + 1] = key;
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

    // Goi hàm insertionSort de sap xep mang
    insertionSort(arr, n);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    printArray(arr, n);

    return 0;
}


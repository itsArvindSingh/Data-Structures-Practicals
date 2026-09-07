#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print_array(int arr[], int n){
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = 0;

    int temp[right - left + 1];

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void quick_sort(int arr[], int low, int high){

    if(low<high){
        int pivot = arr[high];
        int j = low;

        for(int i = low; i < high; i++){
            if(arr[i] < arr[high]){
                swap(&arr[i], &arr[j]);
                j++;
            }
        }
        swap(&arr[j], &arr[high]);

        quick_sort(arr, low, j - 1);
        quick_sort(arr, j + 1, high);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;
    printf("\n------- Practical 03 -------\n");
    printf("My Name is Arvind Singh(92500118080)\n");

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    do {
        printf("\n-------- MENU --------\n");
        printf("1. Quick Sort\n");
        printf("2. Merge Sort\n");
        printf("0. Exit\n");
        printf("----------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Quick Sort ---\n");
                printf("Before sorting: ");
                print_array(arr, n);
                quick_sort(arr, 0, n - 1);
                printf("After sorting:  ");
                print_array(arr, n);
                break;
            case 2:
                printf("\n--- Merge Sort ---\n");
                printf("Before sorting: ");
                print_array(arr, n);
                merge_sort(arr, 0, n - 1);
                printf("After sorting:  ");
                print_array(arr, n);
                break;
            case 0:
                printf("\nExiting program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please enter 0, 1, or 2.\n");
        }
    } while (choice != 0);

    return 0;
}
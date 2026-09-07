#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return -1;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, key, choice, result;

    printf("\n------- Practical 04 -------\n");
    printf("My Name is Arvind Singh(92500118080)\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (sorted for Binary Search):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    print_array(arr, n);

    printf("Enter element to search: ");
    scanf("%d", &key);

    do {
        printf("\n-------- MENU --------\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("0. Exit\n");
        printf("----------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Linear Search ---\n");
                result = linearSearch(arr, n, key);
                if (result != -1) {
                    printf("Element found at position %d (index %d)\n",
                           result + 1, result);
                } 
                else {
                    printf("Element not found!\n");
                }
                break;
            case 2:
                printf("\n--- Binary Search ---\n");
                result = binarySearch(arr, n, key);
                if (result != -1) {
                    printf("Element found at position %d (index %d)\n",
                           result + 1, result);
                } 
                else {
                    printf("Element not found!\n");
                }
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
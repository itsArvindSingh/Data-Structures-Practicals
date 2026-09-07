#include <stdio.h>

void bubble_sort(int arr[], int n) {
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

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = arr[i];

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[100], n, choice;
    
    printf("\n------- Practical 02 -------\n");
    printf("My Name is Arvind Singh(92500118080)\n");

    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    printf("Enter Elements: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    display(arr, n);


    printf("\n--- Choose Sorting Algorithm ---\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter your choice: ");


    scanf("%d", &choice);
    switch (choice) {
        case 1:
            bubble_sort(arr, n);
            printf("\nSorted elements using Bubble Sort: \n");
            display(arr, n);
            break;
        case 2:
            selection_sort(arr, n);
            printf("\nSorted elements using Selection Sort: \n");
            display(arr, n);
            break;
        case 3:
            insertion_sort(arr, n);
            printf("\nSorted elements using Insertion Sort: \n");
            display(arr, n);
            break;
        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
    }
    return 0;
}
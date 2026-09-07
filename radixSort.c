#include <stdio.h>

int maxElement(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n ; i++){
        if ( arr[i] > max ){
            max = arr[i];
        }
    }
    return max;
}

void radixSort(int arr[], int n){
    int max = maxElement(arr, n);

    for(int exp = 1; max/exp > 0; exp = exp*10){
        int output[n];
        int count[10] = {0};
        for( int i = 0; i < n ; i++){
            int digit = (arr[i]/exp)%10;
            count[digit]++;
        }
        for(int i = 1; i<10 ; i++){
            count[i] += count[i-1];
        }
        for(int i = n-1; i >= 0; i--){
            int digit = (arr[i]/exp)%10;
            output[count[digit]-1] = arr[i];
            count[digit]--;
        }
        for(int i = 0; i < n ; i++){
            arr[i] = output[i];
        }
    }
}

int main() {
    printf("My Name is Arvind Singh(92500118080)\n");
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    radixSort(arr,n);
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
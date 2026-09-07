#include <stdio.h>

int main() {
    int arr[100], pos, val, i, n, choice;
    printf("\n------- Practical 01 -------\n");
    printf("My Name is Arvind Singh(92500118080)\n");
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    printf("Enter Elements: ");

    for( i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    do {
        printf("1.Traverse\n2.Insert\n3.Delete\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch(choice){
            case 1://Traverse
                for( i = 0 ; i < n ; i++ ){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2://Insert
                printf("Enter the position: ");
                scanf("%d", &pos);
                printf("Enter the value: ");
                scanf("%d", &val);
                for( i = n ; i > pos ; i--){
                    arr[i] = arr[i-1];
                }
                arr[pos] = val;
                n++;
                break;

            case 3://Delete
                printf("Enter the position: ");
                scanf("%d", &pos);
                for( i = pos ; i < n-1 ; i++){
                    arr[i] = arr[i+1];
                }
                n--;
                break;

            case 4:
                printf("successful exit\n");
                break;
            
            default:
                printf("Invalid Choice!\nEnter Valid Choice");
        }

    }while (choice != 4);
    return 0;
}
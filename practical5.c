#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty(){
    return (top == -1);
}

int isFull(){
    return ( top == MAX-1);
}

void push(int value){
    if(isFull()){
        printf("\nStack Overflow! Cannot push %d\n", value);
    }else {
        top++;
        stack[top] = value;
        printf("\n%d pushed to stack\n", value);
    }
}

void pop(){
    if(isEmpty()){
        printf("\nStack UnderFlow! Cannot pop\n");
    }else {
        printf("\n%d poped from stack.", stack[top]);
        top--;
    }
}

void display(int arr[]){
    if(isEmpty()){
        printf("\nStack is empty");
    }else {
        printf("\nDisplaying stack started.\n");
        for ( int i = top; i >= 0 ; i--){
            printf(" %d", arr[i]);
        }
        printf("\nDisplaying stack completed.\n");
    }
}
int main() {
    printf("My Name is Arvind Singh(92500118080)\n");
    int choice, value;
    do{
        printf("\n--- Stack Menu ---\n");
        printf("1. PUSH\n2. POP\n3. Display\n4. isEmpty\n5. isFull\n6. Exit");
        printf("\nEnter your choice(1/2/3/4/5/6): ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("\nEnter Value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display(stack);
                break;
            case 4:
                if(isEmpty()){
                    printf("\nStack is Empty\n");
                }else {
                    printf("\nStack is not Empty\n");
                }
                break;
            case 5:
                if(isFull()){
                    printf("\nStack is Full\n");
                }else {
                    printf("\nStack is Not Full\n");
                }
                break;
            case 6:
                printf("\nExiting...\n");
                break;
            default:
                printf("Enter Correct Choice!");
        }
    }while (choice != 6);
    return 0;
}
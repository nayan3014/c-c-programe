#include<stdio.h>
void printEvenElements(int arr[], int size){
    printf("even valued elements: ");
    for(int i = 0; i < size; i++){
        if (arr[i]%2 == 0){
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}

void printOddElements(int arr[], int size){
    printf("odd valued elements: ");
    for(int i=0; i < size; i++){
        if(arr[i]%2 != 0){
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}

int main(){
    int size;
    printf("enter the size of the array: ");
    if(size <= 0){
        printf("size must be positive");
        return 1;
    }

    int arr[size];
    printf("enter the elements of the array:\n");
    for(int i = 0;i<size;i++){
    printf("Element %d: ",i + 1);
    scanf("%d", &arr[i]);

    }

    printEvenElements(arr, size);
    printOddElements(arr, size);
    return 0;
}
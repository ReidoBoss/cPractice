#include <stdio.h>

void bubbleSort(int arr[], int size){
int temp;
    for (int i = 0 ; i < size -1 ; i ++){

        for (int j = 0 ; j < size -1 ;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    

}

void before(int arr[],int size){
printf("Array Before: ");

    for(int i = 0; i < size ; i ++){
        printf("%d ",arr[i]);
    }
}

void after(int arr[],int size){
printf("Array After : ");
    for(int i = 0; i < size ; i ++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int array[] = {234,4566,7564,234,232,4531,2345,1,3,45,5,8,9,10,2};
    int arrSize = sizeof(array)/sizeof(array[0]);
    
    before(array,arrSize);
    printf("\n");

    bubbleSort(array,arrSize);

    after(array,arrSize);

    return 0;
}
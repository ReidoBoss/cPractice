#include <stdio.h>

void sortArray(int arr[],int size)
{

    int temp;
    for (int i = 0 ; i < size ; i ++){
        for(int j = 0 ; j < size; j ++){

            
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
            }

        }
    }

}

void displaySorted(int arr[],int size){

    for (int i = 0 ; i < size;i++){
        printf("%d.) %d\n",i+1,arr[i]);
    }
}



int main(){
    int arrayInt[] = {11,10,9,8,7,6,5,4,3,2,1,230};
    int size = sizeof(arrayInt)/sizeof(arrayInt[0]);

    sortArray(arrayInt,size);
    displaySorted(arrayInt,size);
    
    

    return 0;

}
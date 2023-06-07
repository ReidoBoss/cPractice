#include <stdio.h>

void sort(int array[],int size){
    int temp;
    
    for(int i = 0; i < size -1 ; i ++){
        
        for(int j = 0; j < size -1 ; j ++){

            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

            }
            
        }

    }

}

void printArray(int array[],int size){

    for (int i = 0 ; i < size ; i++){

        printf("%d.) %d \n",i+1,array[i]);
    }

}

int main(){

    int array [] = {97,8,2,5,7,9,5,3,4,1};
    int size = sizeof(array) / sizeof(array[0]);
    

    sort(array,size);
    printArray(array,size);


    return 0;

}